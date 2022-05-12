#include <iostream>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 3 5 7
//Output: 5 7 3

//Test case 2:
//Input: 200 123 149
//Output: 123 149 200

//Test case 3:
//Input: 913 5 9
//Output: 5 9 913


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

void Swapp(unsigned int& a, unsigned int& b, unsigned int& c)
{

	a *= b;
	b *= c;
	c *= a;
	c /= b;
	a /= c;
	b /= a;
}

int main()
{
	cout << "------------- P19. HOAN DOI 3 SO -------------" << endl;
	unsigned int a, b, c;
	do
	{
		cout << "Nhap 3 so nguyen duong (0 < a,b,c <= 10^9): ";
		cin >> a >> b >> c;
	} while (a <= 0 || b <= 0 || c <= 0 || a > Pow(10, 9) || b > Pow(10, 9) || c > Pow(10, 9));

	Swapp(a, b, c);
	cout << "Sau khi hoan doi: " << a << " " << b << " " << c << endl;

	return 0;
}