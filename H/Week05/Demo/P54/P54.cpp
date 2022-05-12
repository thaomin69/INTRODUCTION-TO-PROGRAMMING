#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	int count = 0;
	int min = 9;
	int temp = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp <= min)
		{
			min 
		}
		n /= 10;
	}
	cout << count << endl;
	return 0;
}