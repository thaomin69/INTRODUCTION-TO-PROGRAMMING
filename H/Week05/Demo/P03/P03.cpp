#include <iostream>
#include <iomanip>
using namespace std;

//Tính: S(n) = 1 + 1/2 + 1/3 + ... + 1/n

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (double)1 / i;
	}
	cout << "S(" << n << ") = " << fixed << setprecision(2) << sum << endl;

	return 0;
}