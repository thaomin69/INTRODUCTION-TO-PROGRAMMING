#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int temp = 0;
	int count = 0;
	while (n != 0)
	{
		temp = n % 10;
		{
			if (temp != 0)
			{
				count++;
			}
		}
		n /= 10;
	}
	cout << count << endl;
	return 0;
}