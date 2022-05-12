#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

int checkLeapYear(int x);
int check_Input(int& x);
void input_Date(Date& x);
void output_Date(Date& x);
int compare_2_Date(Date a, Date b);
Date find_Tomorrow(Date x);
Date find_Yesterday(Date x);

Date createDate(const int& d, const int& m, const int& y);
void readFile(fstream& inDev, const char FileName[], Date& date);
void writeFile(fstream& outDev, const char FileName[], Date& date);
void readFile2(fstream& inDev, const char FileName[], Date& date1, Date& date2);