#include <iostream>
#include <cmath>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 12 23 33
//Output: 68 90.7083

//Test case 2:
//Input: 3 4 5
//Output: 12 6

//Test case 3:
//Input: 45.7 10 55.6
//Output: 111.3 35.5519

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
	cout << "---------- P13. TINH CHU VI VA DIEN TICH TAM GIAC ----------" << endl;
	float e1, e2, e3;
	do
	{
		cout << "Nhap vao 3 canh cua tam giac (0 < e1, e2, e3 <= 10^9): ";
		cin >> e1 >> e2 >> e3;
	} while (0 >= e1 || 0 >= e2 || 0 >= e3 || e1 > Pow(10, 9) || e2 > Pow(10, 9) || e3 > Pow(10, 9));

	if ((e1 + e2 > e3) && (e1 + e3 > e2) && (e2 + e3 > e1))
	{
		float cv = e1 + e2 + e3;
		float p = cv / 2;
		float dt = sqrt(p * (p - e1) * (p - e2) * (p - e3));
		cout << "Chu vi va dien tich cua tam giac la: " << cv << " " << dt << endl;
	}
	else
	{
		cout << "3 canh nay khong tao thanh 1 tam giac hop le!!!" << endl;
	}

	system("pause");
	return 0;
}