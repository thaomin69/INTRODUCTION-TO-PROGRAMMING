#include <iostream>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 99999
//Output: 5

//Test case 2:
//Input: 40596
//Output: 4

//Test case 3:
//Input: 12429
//Output: 8

int main()
{
	cout << "------------- P16. TINH SO NUT BIEN SO XE -------------" << endl;
	int so_xe;
	do
	{
		cout << "Nhap bien so xe (10000 <= plate <= 99999) : ";
		cin >> so_xe;
	} while (so_xe < 10000 || so_xe > 99999);
	int sum = 0;
	int so_nut = 0;
	int number = 0;
	while (so_xe > 0)
	{
		number = so_xe % 10;
		so_xe /= 10;
		sum += number;
	}
	so_nut = sum % 10;
	cout << "So nut cua xe la: " << so_nut << endl;

	return 0;
}