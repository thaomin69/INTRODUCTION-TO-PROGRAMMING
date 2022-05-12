#include "arrray.h"

int main()
{

	int choice;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "1. Nhap xuat ma tran so nguyen" << endl;
		cout << "2. Nhap xuat ma tran so thuc" << endl;
		cout << "3. Tinh tong cac gia tri am trong ma tran so thuc" << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;

		cout << "Moi thay nhap lua chon: ";
		cin >> choice;

		if (choice == 1)
		{
			int a[100][100];
			int row1, col1;
			input_Int(a, row1, col1);
			output_Int(a, row1, col1);
		}
		else if (choice == 2)
		{
			float b[100][100];
			int row2, col2;
			input_Float(b, row2, col2);
			output_Float(b, row2, col2);
		}
		else if (choice == 3)
		{
			float c[100][100];
			int row3, col3;
			input_Float(c, row3, col3);
			output_Float(c, row3, col3);
			cout << "Tong cac gia tri am trong ma tran so thuc la = " << tong_So_Am(c, row3, col3) << endl;
		}
		else if (choice == 0)
		{
			exit(0);
		}
		system("pause");
	}
	system("pause");
	return 0;
}