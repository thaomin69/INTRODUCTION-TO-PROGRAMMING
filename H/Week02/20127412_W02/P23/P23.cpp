#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

#define PI 3.14

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 3 2
//Output: 17.97

//Test case 2:
//Input: 2.3 4.5
//Output: 38.66

//Test case 3:
//Input: 100.5 2039.7
//Output: 6544910.50

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

int main()
{
	float e, r;
	cout << "------------- P23. TINH DIEN TICH HINH -------------" << endl;
	do
	{
		cout << "Nhap chieu dai canh tam giac deu va ban kinh hinh tron (0 < edge,radius <= 10^9): ";
		cin >> e >> r;
	} while (e <= 0 || r <= 0 || e > Pow(10, 9) || r > Pow(10, 9));

	float dt_tg = (e * e * sqrt(3)) / 4;
	float dt_ht_nho = PI * r * r;  

	cout << fixed << setprecision(2) << (dt_tg * 3 + dt_ht_nho / 2) << endl;
	return 0;
}