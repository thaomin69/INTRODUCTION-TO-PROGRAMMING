#include "function.h"

int main()
{
	Employee list_employees[30];
	string file_name = "December2021.txt";
	int size = 0;
	readFile(file_name, list_employees, size);
	for (int i = 0; i < size; i++)
	{
		cout << list_employees[i].typeEmployee << " " << list_employees[i].name << ", Salary=" << list_employees[i].totalPayment << "$\n";
	}
	return 0;
}