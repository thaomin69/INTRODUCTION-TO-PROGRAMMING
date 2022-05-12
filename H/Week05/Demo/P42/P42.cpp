#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 0;
	int sum = 0;
	while (true)
	{
		sum += i;
		if (sum >= n)
		{
			cout << (i - 1) << endl;
			break;
		}
		i++;
	}
	return 0;
}