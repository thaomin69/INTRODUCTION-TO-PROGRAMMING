#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 25000000 3 4
//Output: 28121600

//Test case 2:
//Input: 25000000 3 4
//Output: 28121600

//Test case 3:
//Input: 15000 2 1.5
//Output: 15301

int Pow(int a, int b)
{
	int res = 1;
	while (b > 0)
	{
		res *= a;
		b--;
	}
	return res;
}

int main()
{
	int balance, month, rate;
	cout << "------------ P27. TINH LAI ------------" << endl;
	do
	{
		cout << "Nhap vao so tien gui, so thang gui va lai suat: ";
		cout << "(0 < balance <= 10^9, 0 < month <= 10^9, 0 < lai suat < 100)" << endl;
		cin >> balance >> month >> rate;
	} while (balance <= 0 || balance > Pow(10, 9) || month <= 0 || month > Pow(10, 9) || rate <= 0 || rate >= 100);

	float q = (float)rate / 100;
	while (month != 0)
	{
		balance = balance + balance * q;
		month--;
	}

	cout << balance << endl;

	system("pause");
	return 0;
}