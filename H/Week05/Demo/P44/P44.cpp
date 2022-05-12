#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int sum = 0;
	int temp = 0;
	while (n != 0)
	{
		temp = n % 10;
		sum += temp;
		n /= 10;
	}
	cout << sum << endl;

	return 0;
}