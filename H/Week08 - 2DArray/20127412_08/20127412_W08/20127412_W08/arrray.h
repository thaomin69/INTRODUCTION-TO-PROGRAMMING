#pragma once
#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P320
//Test case 1: 
//Input: 2 3
//		 3.4 -9.3 2.4 93.4 0.9 3.4
//Output: Tong cac gia tri duong trong ma tran so thuc la = 103.5

//Tese case 2: 
//Input: 2 2
//		 2.3 2.3 -3.4 -82.3
//Output: Tong cac gia tri duong trong ma tran so thuc la = 4.6

//Test case 3: 
//Input: 3 3
//		 3.2 3.4 -3.4 4.5 29.3 -49.5 29.4 -9.3 4.5
//Output: Tong cac gia tri duong trong ma tran so thuc la = 74.3
//---------------------------------------------------------------------

//TEST CASE P347
//Test case 1: 
//Input: 3 3
//		 2 4 6 9 7 5 1 2 3
//Output: So phan tu yen ngua = 1

//Test case 2: 
//Input: 4 4
//		 12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: So phan tu yen ngua = 1

//Test case 3: 
//Input: 3 4
//		 3.4 23.4 4.5 9.3 0.5 23.5 1009.2 384.9 2.3.49.3 5.4 3.5
//Output: So phan tu yen ngua = 1

//---------------------------------------------------------------------

//TEST CASE P402
//Test case 1: 
//Input: 3 3
//		 2 4 6 9 7 5 1 2 3
//Output: Ma tran sau khi xoay 90 do:
//		  1 9 2
//		  2 7 4
//	      3 5 6

//Test case 2: 
//Input: 4 4
//		 12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: Ma tran sau khi xoay 90 do:
//		  3 4 1 12
//		  35 20 30 34
//		  23 44 5 60

//Test case 3: 
//Input: 3 3
//		 1 7 3 7 4 5 3 5 6
//Output: Ma tran sau khi xoay 90 do:
//		  3 7 1
//		  5 4 7
//		  6 5 3

//---------------------------------------------------------------------

//TEST CASE P423
//Test case 1: 
//Input: 3 3
//		 2 4 6 9 7 5 1 2 3
//Output: Ma tran sau khi sap xep theo dang xoan oc
//		  1 2 2
//        7 9 3
//		  6 5 4

//Test case 2: 
//Input: 4 4
//		 12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: Ma tran sau khi sap xep theo dang xoan oc
//		  1 3 4 5
//		  34 34 35 12
//		  33 60 44 20
//		  32 31 30 23

//Test case 3: 
//Input: 3 3
//		 1 7 3 7 4 5 3 5 6
//Output: Ma tran sau khi sap xep theo dang xoan oc
//		  1 3 3
//		  7 7 4
//		  6 5 5


//---------------------------------------------------------------------

//TEST CASE P438
//Test case 1: 
//Input: 3 3
//		 5 2 6 2 3 7 6 7 9
//Output: Tong cac phan tu tam giac tren duong cheo chinh = 15
//		  Tong cac phan tu tam giac tren duong cheo phu = 9

//Test case 2: 
//Input: 3 3
//		 1 7 3 7 4 5 3 5 6
//Output: Tong cac phan tu tam giac tren duong cheo chinh = 15
//		  Tong cac phan tu tam giac tren duong cheo phu = 15

//Test case 3: 
//Input: 4 4
//	    12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: Tong cac phan tu tam giac tren duong cheo chinh = 205
//		  Tong cac phan tu tam giac tren duong cheo phu = 114

//---------------------------------------------------------------------

//TEST CASE P457
//Test case 1: 
//Input: 3 3
//		 5 2 6 2 3 7 6 7 9
//Output: Ma tran doi xung qua duong cheo chinh

//Test case 2: 
//Input: 3 3
//		 1 7 3 7 4 5 3 5 6
//Output: Ma tran doi xung qua duong cheo chinh

//Test case 3: 
//Input:4 4
//	    12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: Ma tran khong doi xung qua duong cheo chinh

//---------------------------------------------------------------------

//TEST CASE P458
//Test case 1: 
//Input: 2 2
//		 12 32 34 60
//Output: Ma tran khong doi xung qua duong cheo phu

//Test case 2: 
//Input: 3 3
//		 12 32 34 60 33 20 44 3 34
//Output: Ma tran khong doi xung qua duong cheo phu

//Test case 3: 
//Input: 4 4
//		 12 32 34 60 1 31 30 5 4 33 20 44 3 34 35 23
//Output: Ma tran khong doi xung qua duong cheo phu

//---------------------------------------------------------------------

//TEST CASE P471
//Test case 1: 
//Input: 2 2
//		 12 32 34 60
//		 2 2 
//       31 30 5 6
//Output: Tich 2 ma tran:
//		  532 552
//		  1354 1380

//Test case 2: 
//Input: 3 3
//		 12 32 34 60 33 20 44 3 34
//		 3 3 
//       31 30 5 6 2 4 6 9 7
//Output: Tich 2 ma tran:
//		  768 730 426
//		  2178 2046 572
//		  1586 1632 470

//Test case 3: 
//Input: 2 2 
//       31 30 5 6
//		 3 3
//       12 32 34 60 33 20 44 3 34
//Output: Tich 2 ma tran:
//		  2172 1982 1654
//		  420 358 290

//---------------------------------------------------------------------


void input_Float(float a[][100], int& row, int& col);
void output_Float(float a[][100], int row, int col);
void input_Int(int a[][100], int& row, int& col);
void output_Int(int a[][100], int row, int col);
void input_Square_Matrix(float a[][100], int& row, int& col);
float P320_sum_Of_Float_Positive_Number(float a[][100], int row, int col);

int P347_count_YenNgua(float a[][100], int row, int col);
//void P398_RightShift(float a[][100], int row, int col);
void P402_XoayMatran_90(float a[][100], float a2[][100], int row, int col);
void P423_sapXepMaTranTangDanXoanOc(float a[][100], float a1[], int row, int col);
float P438_tongMaTranTamGiacTren_Chinh(float a[][100], int row, int col);
float P438_tongMaTranTamGiacTren_Phu(float a[][100], int row, int col);
bool P457_checkDoiXung_DuongCheoChinh(float a[][100], int row, int col);
bool P458_checkDoiXung_DuongCheoPhu(float a[][100], int row, int col);
void P471_Mul_2_Matrix(float a[][100], float b[][100],float c[][100], int row1, int col1, int row2, int col2);

bool check_Max_In_Row(float a[][100], int row_th, int col_th, int col);
bool check_Min_In_Col(float a[][100], int row_th, int col_th, int row);
void MaTranChuyenVi(float a[][100], float b[][100], int row, int col);
void swap(float& a, float& b);
void ascending(float a[], int n);
void twoTo1Array(float a[][100], float a1[], int m, int n, int& k);