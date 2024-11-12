#include "sinhVien.h"
#include<iostream>
#include<string>

	sinhVien::sinhVien(){
	}
	sinhVien::sinhVien(string& maSV, string& hoTen, string& gioiTinh, int tuoi, double diemToan, double diemLy, double diemHoa)
	:maSV(maSV), hoTen(hoTen), gioiTinh(gioiTinh), tuoi(tuoi), diemToan(diemToan), diemLy(diemLy), diemHoa(diemHoa)
	{
		getTB();
		getDiemGPA();
	}
	
	//getter, setter
	string sinhVien::getMaSV(){
		return this->maSV;
	}
	string sinhVien::getHoTen(){
		return this->hoTen;
	}
	string sinhVien::getGioiTinh(){
		return this->gioiTinh;
	}
	int sinhVien::getTuoi(){
		return this->tuoi;
	}
	double sinhVien::getDiemToan(){
		return this->diemToan;
	}
	double sinhVien::getDiemLy(){
		return this->diemLy;
	}
	double sinhVien::getDiemHoa(){
		return this->diemHoa;
	}
	double sinhVien::getDiemTB(){
		return this->diemTB;
	}
	string sinhVien::getGPA(){
		return this->GPA;
	}
	void sinhVien::setMaSV(string& maSV){
		this->maSV = maSV;
	}
	void sinhVien::setHoTen(string& hoTen){
		this->hoTen = hoTen;
	}
	void sinhVien::setGioiTinh(string& gioiTinh){
		this->gioiTinh = gioiTinh;
	}
	void sinhVien::setTuoi(int tuoi){
		this->tuoi = tuoi;
	}
	void sinhVien::setDiemToan(double diemToan){
		this->diemToan = diemToan;
		getTB();
		getDiemGPA();
	}
	void sinhVien::setDiemLy(double diemLy){
		this->diemLy = diemLy;
		getTB();
		getDiemGPA();
	}
	void sinhVien::setDiemHoa(double diemHoa){
		this->diemHoa = diemHoa;
		getTB();
		getDiemGPA();
	}
	//
	void sinhVien::getTB(){
		diemTB = (diemToan + diemLy + diemHoa) / 3.0;
	}
	void sinhVien::getDiemGPA(){
		if(diemTB >= 8.0){
			GPA = "Gioi";
		}
		else if(diemTB >= 7.0){
			GPA = "Kha";
		}
		else if(diemTB >= 5){
			GPA = "Trung Binh";
		}
		else{
			GPA = "Yeu";
		}
	}
	void sinhVien::nhapThongTin(){
		cout << "Nhap Ma SV: "; cin >> maSV;
		cout << "Nhap Ten Sinh Vien: ";
		cin.ignore(); getline(cin, hoTen);
		cout << "Nhap Gioi Tinh: "; cin >> gioiTinh;
		cout << "Nhap tuoi: "; cin >> tuoi;
		cout << "Nhap 3 Mon Toan, Ly, Hoa: "; cin >> diemToan>> diemLy >> diemHoa;
		getTB();
		getDiemGPA();
	}
	
	void sinhVien::inThongTin(){
		cout << "Ma SV : " << maSV << endl;
		cout << "Ho Ten : " << hoTen << endl;
		cout << "Gioi Tinh : " << gioiTinh << endl;
		cout << "Tuoi : " << tuoi << endl;
		printf("Diem Toan, Ly, Hoa : %.2f, %.2f, %.2f\n", diemToan, diemLy, diemHoa);
		printf("Diem TB : %.2f\n", diemTB);
		cout << "GPA : " << GPA << endl;
		cout << endl;
	}