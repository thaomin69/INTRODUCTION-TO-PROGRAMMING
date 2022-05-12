#include <iostream>
#include <iomanip>
using namespace std;

//Tính: S(n) = 1/2 + 2/3 + 3/4 + .... + n/(n + 1)

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (double)i / (i + 1);
	}
	cout << "S(" << n << ") = " << fixed << setprecision(2) << sum << endl;

	return 0;
}