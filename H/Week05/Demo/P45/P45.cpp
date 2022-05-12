#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int tich = 1;
	int temp = 0;
	while (n != 0)
	{
		temp = n % 10;
		{
			tich *= temp;
		}
		n /= 10;
	}
	cout << tich << endl;

	return 0;
}