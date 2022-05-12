#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee
{
	string name;
	int paymentPerType;
	int totalQuantities;
	int totalPayment;
	string typeEmployee;
};

void readFile(string file_name, Employee list_employees[30], int& size);