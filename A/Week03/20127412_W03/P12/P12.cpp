#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: -2 1 4 2
//Output: So lon nhat: 4
//		  So nho nhat: -2

//Test case 2:
//Input:  5 100 2 -4
//Output: So lon nhat: 100
//		  So nho nhat: -4

//Test case 3:
//Input: 3 1 0 7
//Output: So lon nhat: 7
//		  So nho nhat: 0


int findMax(int a, int b, int c, int d)
{
	int max = a;
	if (b > max && b > c && b > d)
		max = b;
	else if (c > max && c > b && c > d)
		max = c;
	else if (d > max && d > b && d > c)
		max = d;
	return max;
}
int findMin(int a, int b, int c, int d)
{
	int min = a;
	if (b < min && b < c && b < d)
		min = b;
	else if (c < min && c < b && c < d)
		min = c;
	else if (d < min && d < b && d < c)
		min = d;
	return min;
}

int main()
{
	cout << "------------ P12. SO NHO NHAT, LON NHAT ------------" << endl;
	int a, b, c, d;
	do
	{
		cout << "Nhap vao 4 so nguyen khac nhau: ";
		cin >> a >> b >> c >> d;
	} while (a == b || a == c || a == d || b == c || b == d || c == d);

	cout << "So lon nhat: "<< findMax(a,b,c,d)<<endl;
	cout << "So nho nhat: " << findMin(a, b, c, d) << endl;

	system("pause");
	return 0;
}