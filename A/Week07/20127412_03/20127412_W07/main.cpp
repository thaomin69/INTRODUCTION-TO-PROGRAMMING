#include "array.h"

int main()
{
	int choice;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "1. Tim so chan lon nhat va so le nho nhat" << endl;
		cout << "2. Tim trung binh cong cac so chan" << endl;
		cout << "4. Tim cac so nguyen to" << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;

		cout << "Moi thay nhap lua chon: ";
		cin >> choice;

		if (choice == 1)

		{
			int a1[101], n1, x, y;
			input(a1, n1);
			cout << "So chan lon nhat va so le nho nhat trong mang la: ";
			P01_MaxChan_MinLe(a1, n1, x, y);
			cout << x << " " << y << endl;
		
		}
		else if (choice == 2)
		{
			int a2[101], n2;
			input_BeHon100(a2, n2);
			cout << "Trung binh cong cac so chan trong mang: " << fixed << setprecision(2) << P02_TBC_SoChan(a2, n2) << endl;
	
		}
		else if (choice == 4)
		{
			int a4[101], n4;
			input_BeHon100(a4, n4);
			bool flag = false;
			P04_Tim_SNT(a4, n4, flag);
			if (flag == false)
			{
				cout << "Khong co so nguyen to trong mang" << endl;
			}
		}
		else if (choice == 0)
		{
			exit(0);

		}
		system("pause");
	}
	return 0;
}