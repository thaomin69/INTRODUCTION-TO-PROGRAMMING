#include <iostream>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 234000
//Output: 500000: 0
//		  200000: 1
//        100000: 0
//        500000: 0
//        200000: 1
//        100000: 1
//        5000: 0
//        2000: 2
//        1000: 0

//Test case 2:
//Input: 5612000
//Output: 500000: 11
//		  200000: 0
//        100000: 1
//        500000: 0
//        200000: 0
//        100000: 1
//        5000: 0
//        2000: 1
//        1000: 0

//Test case 3:
//Input: 12410000
//Output: 500000: 24
//		  200000: 2
//        100000: 0
//        500000: 0
//        200000: 0
//        100000: 1
//        5000: 0
//        2000: 0
//        1000: 0


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
	cout << "------------- P17. DOI TIEN -------------" << endl;
	int money, n1, n2, n5, n10, n20, n50, n100, n200, n500, so_Du;
	
	do
	{
		cout << "Nhap so tien can doi (0 < money <= 10^9): ";
		cin >> money;
	} while (money <= 0 || money > Pow(10, 9));

	n500 = money / 500000; 
	so_Du = money % 500000;
	n200 = so_Du / 200000; 
	so_Du %= 200000;
	n100 = so_Du / 100000; 
	so_Du %= 100000; 
	n50 = so_Du / 50000; 
	so_Du %= 50000; 
	n20 = so_Du / 20000; 
	so_Du % 20000; 
	n10 = so_Du / 10000; 
	so_Du %= 10000; 
	n5 = so_Du / 5000; 
	so_Du %= 5000; 
	n2 = so_Du / 2000;
	so_Du %= 2000; 
	n1 = so_Du / 1000;

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