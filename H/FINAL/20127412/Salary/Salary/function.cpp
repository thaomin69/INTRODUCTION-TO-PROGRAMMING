#include "function.h"

void readFile(string file_name, Employee list_employees[30], int& size)
{
	fstream fin;
	fin.open(file_name, ios_base::in);
	int index = 0;
	string temp;
	char temp_char;
	while (!fin.eof())
	{
		list_employees[index].typeEmployee = list_employees[index].name = "";
		list_employees[index].totalQuantities = list_employees[index].totalPayment = list_employees[index].paymentPerType = 0;
		getline(fin, list_employees[index].typeEmployee, ' ');
		getline(fin, list_employees[index].name);
		fin >> temp_char;
		fin >> temp_char;
		fin >> temp_char;
		getline(fin, temp, '=');
		getline(fin, temp, '$');
		list_employees[index].paymentPerType = stoi(temp);
		getline(fin, temp, '=');
		getline(fin, temp);
		list_employees[index].totalQuantities = stoi(temp);
		list_employees[index].totalPayment = list_employees[index].totalQuantities * list_employees[index].paymentPerType;
		index++;
	}
	size = index;
}