#ifndef QUANLYSV_H
#define QUANLYSV_H

#include<iostream>
#include<vector>
#include<string>
#include "sinhVien.h"
#include "sinhVien.cpp"

using namespace std;

class QuanLySV{
	private:
		vector<sinhVien> sv;
	public:
		void toLowercase(string& s);	
		void addNewSV(sinhVien& a);
		void updateInfoSV(string& maSV);
		bool isEmpty();
		void deleteSV(string& maSV);
		vector<sinhVien> SearchByHoTen(const string& hoTen);
		void sortByDiemTB();
		void sortByName();
		void displayAll();
};
#endif