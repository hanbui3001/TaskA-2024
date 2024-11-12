#include "QuanLySV.h"
#include <algorithm> 
#include <cctype>
void QuanLySV::toLowercase(string& s) {
    for (char& c : s) {
        c = tolower(c);
    }
}


void QuanLySV::addNewSV(sinhVien& a){
	sv.push_back(a);
}
		//
void QuanLySV::updateInfoSV(string& maSV){
	bool check = false;
	for(auto& sinhVien : sv){
		if(sinhVien.getMaSV() == maSV){
			cout << "Ma Sinh Vien Phu Hop\n";
			sinhVien.nhapThongTin();
			check = true;
			cout << "Thay Doi Thong Tin Thanh Cong !!!";	
			break;	
		}
	}
	if(!check){
		cout << "Ma Sinh Vien Khong Phu Hop !!\n";
	}
}
bool QuanLySV::isEmpty() {
    return sv.empty();
}
void QuanLySV::deleteSV(string& maSV){
	auto it = sv.begin();
	while(it != sv.end()){
		if(it->getMaSV() == maSV){
			it = sv.erase(it);
			cout << "Sinh Vien Da Duoc Xoa !!!\n";
			return;
		}
		else{
			++it;
		}
	}
	cout << "Khong Tim Thay Sinh Vien !!!\n";
}
//
vector<sinhVien> QuanLySV::SearchByHoTen(const string& hoTen){
	vector<sinhVien> result;
	string tmp1 = hoTen;
	toLowercase(tmp1);
	for(auto& sinhVien : sv){
		string name = sinhVien.getHoTen();
		string tmp2 = name;
		toLowercase(tmp2);
		if(tmp1 == tmp2){
			result.push_back(sinhVien);
		} 
	}
	return result;
}
//
void QuanLySV::sortByDiemTB(){
	cout << "1 - Sap Xep Tu Thap Len Cao" << endl;
	cout << "2 - Sap Xep Tu Cao Xuong Thap" << endl;;
	cout << "Chon: ";
	int choice;
	cin >> choice;
	if(choice == 1){
		for(int i = 0; i < sv.size() - 1; i++){
		int min_pos = i;
		for(int j = i + 1; j < sv.size(); j++){
			if(sv[min_pos].getDiemTB() > sv[j].getDiemTB()){
				min_pos = j;
			}
		}
		swap(sv[i], sv[min_pos]);
	}
		for(int i = 0; i < sv.size(); i++){
			sv[i].inThongTin();
		}
	}
	else if(choice == 2){
		for(int i = 0; i < sv.size() - 1; i++){
		int min_pos = i;
		for(int j = i + 1; j < sv.size(); j++){
			if(sv[min_pos].getDiemTB() < sv[j].getDiemTB()){
				min_pos = j;
				}
			}
		swap(sv[i], sv[min_pos]);
		}
		for(int i = 0; i < sv.size(); i++){
			sv[i].inThongTin();
		}
	}
}
void QuanLySV::sortByName(){
	cout << "1 - Sap Xep Tu Thap Len Cao" << endl;
	cout << "2 - Sap Xep Tu Cao Xuong Thap" << endl;;
	cout << "Chon: ";
	int choice;
	cin >> choice;
	if(choice == 1){
		for(int i = 0; i < sv.size() - 1; i++){
			int min_pos = i;
			for(int j = i + 1; j < sv.size(); j++){
				if(sv[min_pos].getHoTen() > sv[j].getHoTen()){
					min_pos = j;
				}
			}
			swap(sv[i], sv[min_pos]);
		}
		for(int i = 0; i < sv.size(); i++){
			sv[i].inThongTin();
		}
	}
	else{
		for(int i = 0; i < sv.size() - 1; i++){
			int min_pos = i;
			for(int j = i + 1; j < sv.size(); j++){
				if(sv[min_pos].getHoTen() < sv[j].getHoTen()){
					min_pos = j;
				}
			}
			swap(sv[i], sv[min_pos]);
		}
		for(int i = 0; i < sv.size(); i++){
			sv[i].inThongTin();
		}
	}
}
void QuanLySV::displayAll(){
	if(sv.empty()){
		cout << "Danh Sach Sinh Vien Rong !!!\n";
	}
	else{
		for(auto& sinhVien : sv){
			sinhVien.inThongTin();
		}
	}
}	