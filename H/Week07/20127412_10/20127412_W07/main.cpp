#include "Array.h"

int main()
{
	int choice;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "1. Tim so chan lon nhat va so le nho nhat" << endl;
		cout << "2. Tim trung binh cong cac so chan" << endl;
		cout << "3. Tim cac so nguyen to" << endl;
		cout << "4. Sap xep cac so chan tang dan" << endl;
		cout << "5. Kiem tra thu tu cac phan tu cua mang" << endl;
		cout << "6. Dem cac phan tu khac nhau trong mang" << endl;
		cout << "7. Tim phan tu lon thu hai trong mang" << endl;
		cout << "8. Dao nguoc mang" << endl;
		cout << "9. Tron 2 mang khong giam" << endl;
		cout << "10. Tim cac phan tu cung xuat hien tren 2 mang" << endl;
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
			cout << "Trung binh cong cac so chan trong mang: " << fixed << setprecision(2) << P02_TBC_SoChan(a2, n2) << endl << endl;
		}
		else if (choice == 3)
		{
			int a3[101], n3;
			input_BeHon100(a3, n3);
			bool flag = false;
			P04_Tim_SNT(a3, n3, flag);
			if (flag == false)
			{
				cout << "Khong co so nguyen to trong mang" << endl;
			}
			cout << endl;
		}
		else if (choice == 4)
		{
			int a4[101], n4;
			input_BeHon100(a4, n4);
			P05_SapXepSoChanTangDan(a4, n4);
			cout << "Mang da sap xep cac so chan tang dan: ";
			output(a4, n4);
			cout << endl;
		}
		else if (choice == 5)
		{
			int a5[101], n5;
			input(a5, n5);
			if (P06_KTraThuTuPhanTuMang(a5, n5) == 1)
			{
				cout << "Mang tang dan" << endl;
			}
			else if (P06_KTraThuTuPhanTuMang(a5, n5) == 2)
			{
				cout << "Mang giam dan" << endl;
			}
			else if (P06_KTraThuTuPhanTuMang(a5, n5) == 3)
			{
				cout << "Mang khong tang khong giam" << endl;
			}
			cout << endl;
		}
		else if (choice == 6)
		{
			int a6[101], n6;
			input(a6, n6);
			cout << "Co " << P09_DemPhanTuKhacNhau(a6, n6) << " phan tu khac nhau trong mang" << endl << endl;
		}
		else if (choice == 7)
		{
			int a7[101], n7;
			input(a7, n7);
			cout << "Phan tu lon thu 2 trong mang la: " << P12_TimPhanTuLonThuHai(a7, n7) << endl << endl;
		}
		else if (choice == 8)
		{
			int a8[101], n8;
			input(a8, n8);
			cout << "Mang sau khi dao nguoc: ";
			P15_DaoNguocMang(a8, n8);
			output(a8, n8);
			cout << endl;
		}
		else if (choice == 9)
		{
			int a9[101], b9[101], c9[101], x9, y9, z9;
			input2Mang(a9, b9, x9, y9);
			cout << "Sau khi tron 2 mang khong giam: ";
			P25_Tron2MangKhongGiam(a9, b9, c9, x9, y9, z9);
			output(c9, z9);
			cout << endl;
		}
		else if (choice == 10)
		{
			int a10[101], b10[101], x10, y10;
			input2Mang(a10, b10, x10, y10);
			cout << "Nhung phan tu xuat hien o 2 mang: ";
			P26_TimPhanTuXuatHienO2Mang(a10, b10, x10, y10);
			cout << endl;
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
