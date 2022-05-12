#include <iostream>
#include <iomanip>
using namespace std;

//Tính: S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	double sum = 0;
	for(int i = 0; i <= n; i++)
	{
		sum += (double)1 / (2 * i + 1);
	}
	cout << "S(" << n << ") = " << fixed << setprecision(2) << sum << endl;

	return 0;
}