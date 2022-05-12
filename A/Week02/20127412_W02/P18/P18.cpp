#include <iostream>
#include <cmath>
using namespace std;

//Test case 1
//Input: 2 3
//Output: 3 2

//Test case 2
//Input: 10 20
//Output: 20, 10

//Test case 3
//Input: 5 6
//Output: 6 5

int Pow(int a, int b)
{
	int res = 1;
	while (b > 0)
	{
		res *= a;
		b--;
	}
	return res;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "P18. HOAN DOI 2 SO" << endl;
	int a, b;
	do
	{
		cout << "Nhap 2 so nguyen duong (0 <= a,b <= 10^9): ";
		cin >> a >> b;
	} while (a <= 0 || b <= 0 || a >= Pow(10, 9) || b >= Pow(10, 9));

	swap(a, b);
	cout <<"Sau khi hoan doi: " << a << " " << b << endl;

	return 0;
}