#include <iostream>
using namespace std;

int main()
{
	int money, n1, n2, n5, n10, n20, n50, n100, n200, n500, so_Du;
	cout << "Nhap so tien: ";
	cin >> money;

	//input = 2.361.000

	n500 = money / 500000; //n500 = 4
	so_Du = money % 500000; //sd = 361.000
	n200 = so_Du / 200000; //n200 = 2
	so_Du %= 200000; //sd = 161.000
	n100 = so_Du / 100000; //n100 = 1
	so_Du %= 100000; //sd = 61.000
	n50 = so_Du / 50000; //n50 = 1
	so_Du %= 50000; //sd = 11.000
	n20 = so_Du / 20000; //n20 = 0
	so_Du % 20000; //sd = 11.000
	n10 = so_Du / 10000; //n10 = 1
	so_Du %= 10000; //sd = 1000
	n5 = so_Du / 5000; //n5 = 0
	so_Du %= 5000; //sd = 1000
	n2 = so_Du / 2000; //n2 = 0
	so_Du %= 2000; //sd = 1000
	n1 = so_Du / 1000; //n1 = 1

	cout << "500000: " << n500 << endl;
	cout << "200000: " << n200 << endl;
	cout << "100000: " << n100 << endl;
	cout << "50000: " << n50 << endl;
	cout << "20000: " << n20 << endl;
	cout << "10000: " << n10 << endl;
	cout << "5000: " << n5 << endl;
	cout << "2000: " << n2 << endl;
	cout << "1000: " << n1 << endl;

	return 0;
}