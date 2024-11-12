#ifndef SINHVIEN_H
#define SINHVIEN_H

#include<iostream>
#include<string>

using namespace std;
	class sinhVien{
		private:
			string maSV, hoTen, gioiTinh;
			int tuoi;
			double diemToan, diemLy, diemHoa;
			double diemTB;
			string GPA;
	public:
		sinhVien();
		sinhVien(string& maSV, string& hoTen, string& gioiTinh, int tuoi, double diemToan, double diemLy, double diemHoa);
		string getMaSV();	
		string getHoTen();
		string getGioiTinh();
		int getTuoi();			
		double getDiemToan();
		double getDiemLy();	
		double getDiemHoa();
		double getDiemTB();
		string getGPA();			
		void setMaSV(string& maSV);	
		void setHoTen(string& hoTen);		
		void setGioiTinh(string& gioiTinh);
		void setTuoi(int tuoi);				
		void setDiemToan(double diemToan);
		void setDiemLy(double diemLy);
		void setDiemHoa(double diemHoa);
		void getTB();		
		void getDiemGPA();		
		void nhapThongTin();		
		void inThongTin();		
};
#endif