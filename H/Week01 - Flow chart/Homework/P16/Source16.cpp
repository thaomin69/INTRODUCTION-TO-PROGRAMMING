#include <iostream>
using namespace std;

//Viết chương trình nhập vào biển số xe, là một số nguyên dương có 5 chữ số.
//Tính số nút của biển số xe đó.

int main()
{
	int so_xe;
	cout << "Nhap bien so xe: ";
	cin >> so_xe;
	int sum = 0;
	//int i = 0;
	int so_nut = 0;
	int number = 0;
	while (so_xe > 0)
	{
		number = so_xe % 10; //lấy số cuối của biển số xe
		so_xe /= 10; //bỏ số cuối
		sum += number;
		//i++;
	}
	so_nut = sum % 10;
	cout << "So nut cua xe la: " << so_nut << endl;

	return 0;
}