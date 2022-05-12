#pragma once
#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P311 + P313
//Test case 1: 
//Input: 2 3
//		 6 9 17 2002 28 4
//Output: 6 9 17
//        2002 28 4

//Test case 2: 
//Input: 3 3
//		 -38 28 30 281 39 -39 28 -102 390
//Output: -38 28 30
//         281 39 - 39
//         28 - 102 390

//Test case 3: 
//Input: 2 2
//		 38 29 -3 2
//Output: 38 29
//        -3 2

//---------------------------------------------------------------------

//TEST CASE P312 + P314
//Test case 1: 
//Input: 2 3
//		 3.4 -9.3 2.4 93.4 0.9 3.4
//Output: 3.4 -9.3 2.4
//        93.4 0.9 3.4

//Tese case 2: 
//Input: 2 2
//		 2.3 2.3 -3.4 82.3
//Output: 2.3 2.3
//        -3.4 82.3

//Test case 3: 
//Input: 3 3
//		 3.2 3.4 -3.4 4.5 29.3 49.5 29.4 -9.3 4.5
//Output: 3.2 3.4 -3.4
//        4.5 29.3 49.5
//        29.4 - 9.3 4.5

//---------------------------------------------------------------------

//TEST CASE P318
//Test case 1: 
//Input: 2 3
//		 3.4 -9.3 2.4 93.4 0.9 3.4
//Output: Tong cac gia tri am trong ma tran so thuc la = -9.3

//Tese case 2: 
//Input: 2 2
//		 2.3 2.3 -3.4 -82.3
//Output: Tong cac gia tri am trong ma tran so thuc la = -85.7

//Test case 3: 
//Input: 3 3
//		 3.2 3.4 -3.4 4.5 29.3 -49.5 29.4 -9.3 4.5
//Output: Tong cac gia tri am trong ma tran so thuc la = -62.2

//---------------------------------------------------------------------

void input_Float(float a[][100], int& row, int& col);
void output_Float(float a[][100], int row, int col);
void input_Int(int a[][100], int& row, int& col);
void output_Int(int a[][100], int row, int col);
float tong_So_Am(float a[][100], int row, int col);