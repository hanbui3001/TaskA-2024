#include "menuSV.h"
void menuSV::run(){
		while(true){
			cout << "----------- MENU Quan Ly Sinh Vien -----------\n";
			cout << "1 - Them Sinh Vien\n";
			cout << "2 - Cap Nhat Thong Tin Sinh Vien Theo Ma SV\n";
			cout << "3 - Xoa Sinh Vien Theo Ma SV\n";
			cout << "4 - Tim Kiem Sinh Vien Theo Ho Ten\n";
			cout << "5 - Sap Xep Sinh Vien Theo Diem Trung Binh\n";
			cout << "6 - Sap Xep Sinh Vien Theo Ten\n";
			cout << "7 - Hien Thi Danh Sach Sinh Vien\n";
			cout << "0 - Thoat\n";
			int choice;
			cout << "Nhap Chuc Nang : ";
			cin >> choice;
			cin.ignore();
			switch(choice){
				case 1:{
					cout << ".........................\n";
					cout << "\n";
					sinhVien a;
					a.nhapThongTin();
					manager.addNewSV(a);
					cout << "Da Them 1 Sinh Vien\n";
					//manager.saveToFile("pupil.txt");
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 2:{
					cout << ".........................\n";
					cout << "\n";
					string id;
					cout << "Nhap Ma SV: "; cin >> id;
					manager.updateInfoSV(id);	
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 3:{
					cout << ".........................\n";
					cout << "\n";
					string id;
					cout << "Nhap Ma SV: "; cin >> id;
					if (manager.isEmpty()) {
        				cout << "Danh sach sinh vien rong, khong the xoa!" << endl;
    				} else {
        				manager.deleteSV(id);
    				}
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 4:{
					cout << ".........................\n";
					cout << "\n";
					string name;
					cout << "Nhap Ho Ten : ";
					getline(cin, name);
					vector<sinhVien> search = manager.SearchByHoTen(name);
					if(search.empty()){
						cout << "Khong Tim Thay Sinh Vien !!!\n";
					}
					else{
						for(auto& sv : search){
							sv.inThongTin();
						}
					}
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 5:{
					cout << ".........................\n";
					cout << "\n";
					if (manager.isEmpty()) {
        				cout << "Danh sach sinh vien rong, khong the sap xep!" << endl;
    				}
					else{
					manager.sortByDiemTB();
					}
					cout << "\n";
					break;
				}
				case 6:{
					cout << ".........................\n";
					cout << "\n";
					if (manager.isEmpty()) {
        				cout << "Danh sach sinh vien rong, khong the sap xep!" << endl;
    				}
    				else{
					manager.sortByName();
					}
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 7:{
					cout << ".........................\n";
					cout << "\n";
					manager.displayAll();
					cout << ".........................\n";
					cout << "\n";
					break;
				}
				case 0:{
					//manager.saveToFile("pupil.txt");
					cout << "Thoat Chuong Trinh !\n";
					break;
				}
				default:{
					cout << "Lua Chon Khong Phu Hop\n";
					break;
				}
			}
		}
	}	