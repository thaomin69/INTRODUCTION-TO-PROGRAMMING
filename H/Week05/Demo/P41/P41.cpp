#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = 1 / (1 + sum);
	}
	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}