#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float cd, r;
	cout << "Nhap cd tam giac deu: ";
	cin >> cd;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> r;

	float dt_tg = (cd * cd * sqrt(3)) / 4;
	float dt_ht_nho = 3.14 * r * r;

	cout << "Dien tich phan to xam: " << dt_ht_nho/2 + dt_tg * 3 << endl;

	return 0;
}