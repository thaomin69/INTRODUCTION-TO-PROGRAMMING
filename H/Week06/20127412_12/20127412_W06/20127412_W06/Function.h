#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P42
//Test case 1:
//Input: 40
//Output: So k = 8

//Test case 2:
//Input: 104
//Output: So k = 13

//Test case 3:
//Input: 10428
//Output: So k = 143

//------------------------------------------------

//TEST CASE P46
//Test case 1:
//Input: 12093
//Output: 12093 co 3 chu so le

//Test case 2:
//Input: 2468
//Output: 2468 co 0 chu so le

//Test case 3:
//Input: 13579
//Output: 13579 co 5 chu so le

//------------------------------------------------

//TEST CASE P50
//Test case 1:
//Input: 5738
//Output: So dao nguoc cua 5738 la: 8375

//Test case 2:
//Input: 1004
//Output: So dao nguoc cua 1004 la: 4001

//Test case 3:
//Input: 123456789
//Output: So dao nguoc cua 123456789 la: 987654321

//------------------------------------------------

//TEST CASE P54
//Test case 1:
//Input: 123144
//Output: So luong chu so nho nhat cua 123144 la: 2

//Test case 2:
//Input: 1
//Output: So luong chu so nho nhat cua 1 la: 1

//Test case 3:
//Input: 79814114
//Output: So luong chu so nho nhat cua 79814114 la: 3

//------------------------------------------------

//TEST CASE P58
//Test case 1:
//Input: 12345
//Output: YES

//Test case 2:
//Input: 987654321
//Output: NO

//Test case 4:
//Input: 12345289
//Output: NO

//------------------------------------------------

//TEST CASE P62
//Test case 1:
//Input: 8 4
//Output: 1 -1

//Test case 2:
//Input: 125 15
//Output: 1 -8

//Test case 3:
//Input: 18 3
//Output: 1 -5

//------------------------------------------------

//TEST CASE P66
//Test case 1:
//Input: 4
//Output: S(4) = 0.73

//Test case 2:
//Input: 6
//Output: S(6) = 0.75

//Test case 3:
//Input: 19
//Output: S(19) = 0.78

//------------------------------------------------

//TEST CASE P70
//Test case 1:
//Input: 3 2
//Output: S(3,2) = 0.48

//Test case 2:
//Input: 10 5
//Output: S(10,5) = 1057.94

//Test case 2:
//Input: 4 9
//Output: S(4,9) = 1.76

//------------------------------------------------

//TEST CASE P74
//Test case 1:
//Input: 10 2 2021
//Output: So thu tu cua 10/2/2021 la: 41

//Test case 2:
//Input: 1 3 2021
//Output: So thu tu cua 1/3/2021 la: 60

//Test case 3:
//Input: 31 12 2016
//Output: So thu tu cua 31/12/2016 la: 366

//------------------------------------------------

//TEST CASE P78
//Test case 1:
//Input: 15
//Output: 3 5

//Test case 2:
//Input: 135
//Output: 3 5 9

//Test case 3:
//Input: 1350
//Output: 2 3 5 9

//------------------------------------------------

//TEST CASE P100
//Test case 1:
//Input: 3 -6 1
//Output: Phuong trinh co 2 nghiem: x1 = 1.8165; x2 = 0.183503

//Test case 2:
//Input: 0 5 3
//Output: Phuong trinh co 1 nghiem: x = -0.6

//Test case 3:
//Input: 4 8 4
//Output: Phuong trinh co nghiem kep x1 = x2 = -16

//------------------------------------------------

//TEST CASE P101
//Test case 1:
//Input: 28 2 2016
//Output: The next day: 29/2/2016

//Test case 2:
//Input: 28 2 2021
//Output: The next day: 1/3/2021

//Test case 3:
//Input: 31 12 2021
//Output: The next day: 1/1/2022


void input_SoThuc(double& n);
void input_SoNguyenKhongAm(int& n);
void input_ABC_PTBac2(double& a, double& b, double& c);
void input_SoNguyenDuong(int& n);
void input_DMY(int& d, int& m, int& y);

bool checkPrime(int n);
bool check_LeapYear(int y);
bool checkDMY(int d, int m, int y);

long long giaiThua(int n);
long double Pow(int a, int b);
int numberOfDay_InMonth(int m, int y);
int find_MinDigit(int n);
int gcd(int a, int b);

int P42_findK(int n);
int P46_count(int n);
int P50_reverse(int n);
int P54_countMinDigit(int n);
bool P58_checkSoTangDan(int n);
void P62_USCLN_XY(int a, int b);
double P66_TinhTong(int n);
double P70_TinhTong(double x, int n);
int P74_SoThuTuCuaNgay(int d, int m, int y);
void P78_ThuaSoNguyenTo(int n);
int P100_solveQuadratic(double a, double b, double c, double& x1, double& x2);
void P101_tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2);