#include "Function.h"

//Nguyen Thi Minh Thao
//20127412

//TEST CASE P46
//Test case 1:
//Input: 40
//Output: So k = 8

//Test case 2:
//Input: 104
//Output: So k = 13

//Test case 3:
//Input: 10428
//Output: So k = 143

//------------------------------------------------

//TEST CASE P46
//Test case 1:
//Input: 12093
//Output: 12093 co 3 chu so le

//Test case 2:
//Input: 2468
//Output: 2468 co 0 chu so le

//Test case 3:
//Input: 13579
//Output: 13579 co 5 chu so le

//------------------------------------------------

//TEST CASE P50
//Test case 1:
//Input: 5738
//Output: So dao nguoc cua 5738 la: 8375

//Test case 2:
//Input: 1004
//Output: So dao nguoc cua 1004 la: 4001

//Test case 3:
//Input: 123456789
//Output: So dao nguoc cua 123456789 la: 987654321


int main()
{
	int choice;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "42. Tim gia tri nguyen duong k lon nhat sao cho S(k) < n" << endl;
		cout << "46. Dem so luong cac chu so le cua so nguyen duong n" << endl;
		cout << "50. Tim so dao nguoc cua so nguyen duong n" << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;
	
		cout << "Moi nhap lua chon: ";
		cin >> choice;

		switch (choice)
		{
		case 42:
			int a;
			input_SoNguyenKhongAm(a);
			cout << "So k = " << P42_findK(a) << endl;
			break;
		case 46:
			int b;
			input_SoNguyenDuong(b);
			cout << b << " co " << P46_count(b) << " chu so le" << endl;
			break;
		case 50:
			int c;
			input_SoNguyenDuong(c);
			cout << "So dao nguoc cua " << c << " la: " << P50_reverse(c) << endl;
			break;
		case 0:
			exit(1);
			break;
		}
		system("pause");
	}
	return 0;
}