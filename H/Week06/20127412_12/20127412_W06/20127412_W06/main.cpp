#include "Function.h"

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
		cout << "54. So luong cac chu so nho nhat" << endl;
		cout << "58. Kiem tra cac chu so cua so nguyen duong n co tang dan hay khong (tu trai sang phai)" << endl;
		cout << "62. Tim x, y thoa man USCLN(a, b) = a*x + b*y" << endl;
		cout << "66. Tinh tong" << endl;
		cout << "70. Tinh tong" << endl;
		cout << "74. So thu tu cua ngay trong nam" << endl;
		cout << "78. In ra cac thua so nguyen to" << endl;
		cout << "100. Giai phuong trinh bac 2" << endl;
		cout << "101. Find the next day; " << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;

		cout << "Moi nhap lua chon: ";
		cin >> choice;
		switch (choice)
		{
		case 42:
			int a1;
			input_SoNguyenKhongAm(a1);
			cout << "So k = " << P42_findK(a1) << endl;
			break;
		case 46:
			int a2;
			input_SoNguyenDuong(a2);
			cout << a2 << " co " << P46_count(a2) << " chu so le" << endl;
			break;
		case 50:
			int a3;
			input_SoNguyenDuong(a3);
			cout << "So dao nguoc cua " << a3 << " la: " << P50_reverse(a3) << endl;
			break;
		case 54:
			int a4;
			input_SoNguyenDuong(a4);
			cout << "So luong chu so nho nhat cua " << a4 << " la: " << P54_countMinDigit(a4) << endl;
			break;
		case 58:
			int a5;
			input_SoNguyenDuong(a5);
			if (P58_checkSoTangDan(a5) == true)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			break;
		case 62:
			int a6, b6;
			input_SoNguyenDuong(a6);
			input_SoNguyenDuong(b6);
			P62_USCLN_XY(a6, b6);
			break;
		case 66:
			int n7;
			input_SoNguyenDuong(n7);
			cout << "S(" << n7 << ") = " << fixed << setprecision(2) << P66_TinhTong(n7) << endl;
			break;
		case 70:
			int n8;
			double x8;
			input_SoThuc(x8);
			input_SoNguyenDuong(n8);
			cout << "S(" << x8 << "," << n8 << ") = " << fixed << setprecision(2) << P70_TinhTong(x8, n8) << endl;
			break;
		case 74:
			int dd, mm, yy;
			input_DMY(dd, mm, yy);
			cout << "So thu tu cua " << dd << "/" << mm << "/" << yy << " la: " << P74_SoThuTuCuaNgay(dd, mm, yy) << endl;
			break;
		case 78:
			int n9;
			input_SoNguyenDuong(n8);
			P78_ThuaSoNguyenTo(n8);
			break;
		case 100:
			double a, b, c, x1, x2;
			input_ABC_PTBac2(a, b, c);
			if (P100_solveQuadratic(a, b, c, x1, x2) == -1)
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
			else if (P100_solveQuadratic(a, b, c, x1, x2) == 0)
			{
				cout << "Phuong trinh co 1 nghiem: x = " << x1 << endl;
			}
			else if (P100_solveQuadratic(a, b, c, x1, x2) == 1)
			{
				cout << "Phuong trinh co 1 nghiem: x = " << x1 << endl;
			}
			else if (P100_solveQuadratic(a, b, c, x1, x2) == 2)
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
			else if (P100_solveQuadratic(a, b, c, x1, x2) == 3)
			{
				cout << "Phuong trinh co nghiem kep x1 = x2 = " << x1 << endl;
			}
			else if (P100_solveQuadratic(a, b, c, x1, x2) == 4)
			{
				cout << "Phuong trinh co 2 nghiem: x1 = " << x1 << "; x2 = " << x2 << endl;
			}
			break;
		case 101:
			int d1, m1, y1, d2, m2, y2;
			input_DMY(d1, m1, y1);
			P101_tomorrow(d1, m1, y1, d2, m2, y2);
			break;
		case 0:
			exit(1);
			break;
		}
		system("pause");
	}
	return 0;
}

