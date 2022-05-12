#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P01
//Test case 1:
//Input: 5
//		 1290 3 491 4 2
//Output: So chan lon nhat va so le nho nhat trong mang la: 1290 3

//Test case 2:
//Input: 10
//       328 19 299 10 2 3 3801 -192 381 8301
//Output: So chan lon nhat va so le nho nhat trong mang la: 328 3

//Test case 3:
//Input: 4
//       120 -4 128 9
//Output: So chan lon nhat va so le nho nhat trong mang la: 128 9

//---------------------------------------------------------------------

//TEST CASE P02
//Test case 1:
//Input: 5
//       923 18 28 192 12
//Output: Trung binh cong cac so chan trong mang: 62.50

//Test case 2:
//Input: 5
//		 128 120 28 122 39
//Output: Trung binh cong cac so chan trong mang: 99.50

//Test case 3:
//Input: 5
//		 128 9 139 29 1999
//Output: Trung binh cong cac so chan trong mang: 128.00

//---------------------------------------------------------------------

//TEST CASE P04
//Test case 1:
//Input: 5
//       1 1 1 1 1
//Output: Khong co so nguyen to trong mang

//Test case 2:
//Input: 5
//       1 2 3 4 5
//Output: 2 3 5

//Test case 3:
//Input: 5
//	     28 19 29 149 2
//Output: 19 29 149 2

//---------------------------------------------------------------------

//TEST CASE P05
//Test case 1:
//Input: 5
//       6 2 3 4 0
//Output: Mang da sap xep cac so chan tang dan: 0 2 3 4 6

//Test case 2:
//Input: 6
//       4 1 2 6 8 0
//Output: Mang da sap xep cac so chan tang dan: 0 1 2 4 6 8

//Test case 3:
//Input: 5
//       1 3 5 7 9
//Output: Mang da sap xep cac so chan tang dan: 1 3 5 7 9

//---------------------------------------------------------------------

//TEST CASE P06
//Test case 1:
//Input: 5
//       6 9 17 90 2002
//Output: Mang tang dan

//Test case 2:
//Input: 5
//       4 -2 90 1 202
//Output: Mang khong tang khong giam

//Test case 3:
//Input: 5
//       2002 320 92 1 -5
//Output: Mang giam dan

//---------------------------------------------------------------------

//TEST CASE P09
//Test case 1:
//Input: 5
//       1 1 1 1 5
//Output: Co 2 phan tu khac nhau trong mang

//Test case 2:
//Input: 5
//       29 3 4 2 29
//Output: Co 4 phan tu khac nhau trong mang

//Test case 3:
//Input: 6
//       20 1 20 1 3 4
//Output: Co 4 phan tu khac nhau trong mang

//---------------------------------------------------------------------

//TEST CASE P12
//Test case 1:
//Input: 5
//       39 10 -2 4 1
//Output: Phan tu lon thu 2 trong mang la: 10

//Test case 2:
//Input: 4
//       9 100 -2 3
//Output: Phan tu lon thu 2 trong mang la: 9

//Test case 3:
//Input: 7
//       90 28 2 -4 55 -10 77
//Output: Phan tu lon thu 2 trong mang la: 77

//---------------------------------------------------------------------

//TEST CASE P15
//Test case 1:
//Input: 5
//       1 3 5 7 9
//Output: Mang sau khi dao nguoc: 9 7 5 3 1

//Test case 2:
//Input: 4
//       -1 4 29 10
//Output: Mang sau khi dao nguoc: 10 29 4 -1

//Test case 3:
//Input: 6
//       28 192 4 -8 3 2
//Output: Mang sau khi dao nguoc: 2 3 -8 4 192 28


//---------------------------------------------------------------------

//TEST CASE P25
//Test case 1:
//Input: 6 7
// -3 4 7 8 20 109
// -19 -2 4 10 30 108 1024
//Output: Sau khi tron 2 mang: -19 -3 -2 4 4 7 8 10 20 30 108 109 1024

//Test case 2:
//Input: 7 7
// -2 3 5 9 20 309 1909
// 3 5 6 10 29 90 109
//Output: Sau khi tron 2 mang khong giam: -2 3 3 5 5 6 9 10 20 29 90 109 309 1909

//Test case 3:
//Input: 6 5
// 1 2 3 4 5 90
// -2 3 20 190 200
//Output: Sau khi tron 2 mang khong giam: -2 1 2 3 3 4 5 20 90 190 200

//---------------------------------------------------------------------

//TEST CASE P26
//Test case 1:
//Input: 6 5
//		 4 2 4 12 69 4 - 69 2002 4 5 7
//Output: Nhung phan tu xuat hien o 2 mang: 4 4 4 69		  

//Test case 2:
//Input: 5 5
//		 17 9 2002 6 9 - 2002 6 28 4 2021
//Output: Nhung phan tu xuat hien o 2 mang: 6 2002

//Test case 3:
//Input: 6 6
//		 201 3 5 90 2 3 - 3 49 90 201 5 6
//Output: Nhung phan tu xuat hien o 2 mang: 3 3 5 90 201

//---------------------------------------------------------------------

void input(int a[], int& n);
void input2Mang(int a[], int b[], int& x, int& y);
void input_BeHon100(int a[], int& n);
void output(int a[], int n);

bool ktra_SoChan(int n);
bool ktra_SoLe(int n);
bool checkPrime(int n);
bool KtraMangTangDan(int a[], int n);
bool KtraMangGiamDan(int a[], int n);

void swap(int& a, int& b);
void ascending(int a[], int n);
void delete_Element_AtPos(int a[], int& n, int pos);
void XoaPhanTuTrungNhau(int a[], int& n);

void P01_MaxChan_MinLe(int a[], int n, int& max_chan, int& min_le);
double P02_TBC_SoChan(int a[], int n);
void P04_Tim_SNT(int a[], int n, bool& check);
void P05_SapXepSoChanTangDan(int a[], int n);
int P06_KTraThuTuPhanTuMang(int a[], int n);
int P09_DemPhanTuKhacNhau(int a[], int &n);
int P12_TimPhanTuLonThuHai(int a[], int n);
void P15_DaoNguocMang(int a[], int n);
void P25_Tron2MangKhongGiam(int a[], int b[], int c[], int x, int y, int& z);
void P26_TimPhanTuXuatHienO2Mang(int a[], int b[], int x, int y);