#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P01
//Test case 1:
//Input: 1290 3 491 4 2
//Output: So chan lon nhat va so le nho nhat trong mang la: 1290 3


//Test case 2:
//Input: 328 19 299 10 2 3 3801 -192 381 8301
//Output: So chan lon nhat va so le nho nhat trong mang la: 328 3

//Test case 3:
//Input: 120 -4 128 9
//Output: So chan lon nhat va so le nho nhat trong mang la: 128 9

//---------------------------------------------------------------------

//TEST CASE P02
//Test case 1:
//Input: 923 18 28 192 12
//Output: Trung binh cong cac so chan trong mang: 62.50

//Test case 2:
//Input: 128 120 28 122 39
//Output: Trung binh cong cac so chan trong mang: 99.50

//Test case 3:
//Input: 128 9 139 29 1999
//Output: Trung binh cong cac so chan trong mang: 128.00

//---------------------------------------------------------------------

//TEST CASE P04
//Test case 1:
//Input: 1 1 1 1 1
//Output: Khong co so nguyen to trong mang

//Test case 2:
//Input: 1 2 3 4 5
//Output: 2 3 5

//Test case 3:
//Input: 28 19 29 149 2
//Output: 19 29 149 2

//---------------------------------------------------------------------

void input(int a[], int& n);
void input_BeHon100(int a[], int& n);
void output(int a[], int n);
bool ktra_SoChan(int n);
bool ktra_SoLe(int n);
bool checkPrime(int n);

void P01_MaxChan_MinLe(int a[], int n, int& max_chan, int& min_le);
double P02_TBC_SoChan(int a[], int n);
void P04_Tim_SNT(int a[], int n, bool& check);