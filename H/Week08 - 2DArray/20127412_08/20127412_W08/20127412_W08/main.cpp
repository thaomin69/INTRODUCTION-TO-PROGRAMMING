#include "arrray.h"

int main()
{
	int choice;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "1. Tinh tong cac gia tri duong trong ma tran so thuc" << endl;
		cout << "2. Dem so luong gia tri Yen Ngua trong ma tran" << endl;
		cout << "5. Xoay ma tran 90 do" << endl;
		cout << "6. Sap xep cac phan tu trong ma tran tang dan theo dang xoan oc" << endl;
		cout << "7. Tinh tong cac phan tu tam giac tren duong cheo" << endl;
		cout << "8. Kiem tra ma tran co doi xung qua duong cheo chinh khong" << endl;
		cout << "9. Kiem tra ma tran co doi xung qua duong cheo phu khong" << endl;
		cout << "10. Nhan 2 ma tran vuong" << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;

		cout << "Moi thay nhap lua chon: ";
		cin >> choice;

		if (choice == 1)
		{
			float a1[100][100];
			int row1, col1;
			input_Float(a1, row1, col1);
			output_Float(a1, row1, col1);
			cout << "Tong cac gia tri duong trong ma tran so thuc la = " << P320_sum_Of_Float_Positive_Number(a1, row1, col1) << endl;
		}
		else if (choice == 2)
		{
			float a2[100][100];
			int row2, col2;
			input_Float(a2, row2, col2);
			output_Float(a2, row2, col2);
			cout << "So phan tu yen ngua = " << P347_count_YenNgua(a2, row2, col2) << endl;
		}
		else if (choice == 5)
		{
			float a5[100][100], b5[100][100];
			int row, col;
			input_Float(a5, row, col);
			output_Float(a5, row, col);
			cout << "Ma tran sau khi xoay 90 do: " << endl;
			P402_XoayMatran_90(a5, b5, row, col);
			output_Float(b5, col, row);
		}
		else if (choice == 6)
		{
			float a6[100][100], a1[100];
			int row, col, k;
			input_Float(a6, row, col);
			output_Float(a6, row, col);
			cout << "\nMa tran sau khi sap xep theo dang xoan oc" << endl;
			twoTo1Array(a6, a1, row, col, k);
			ascending(a1, k);
			P423_sapXepMaTranTangDanXoanOc(a6, a1, row, col);
			output_Float(a6, row, col);
			cout << endl;
		}
		else if (choice == 7)
		{
			float a7[100][100];
			int row, col;
			cout << "Nhap ma tran vuong: " << endl;
			input_Square_Matrix(a7, row, col);
			cout << "Ma tran vuong: " << endl;
			output_Float(a7, row, col);

			cout << "\nTong cac phan tu tam giac tren duong cheo chinh = " << P438_tongMaTranTamGiacTren_Chinh(a7, row, col) << endl;
			cout << "Tong cac phan tu tam giac tren duong cheo phu = " << P438_tongMaTranTamGiacTren_Phu(a7, row, col) << endl;
		}
		else if (choice == 8)
		{
			float a8[100][100];
			int row, col;
			cout << "Nhap ma tran vuong: " << endl;
			input_Square_Matrix(a8, row, col);
			cout << "Ma tran vuong: " << endl;
			output_Float(a8, row, col);
			if (P457_checkDoiXung_DuongCheoChinh(a8, row, col) == true)
			{
				cout << "Ma tran doi xung qua duong cheo chinh" << endl;
			}
			else
			{
				cout << "Ma tran khong doi xung qua duong cheo chinh" << endl;
			}
		}
		else if (choice == 9)
		{
			float a9[100][100];
			int row, col;
			cout << "Nhap ma tran vuong: " << endl;
			input_Square_Matrix(a9, row, col);
			cout << "Ma tran vuong: " << endl;
			output_Float(a9, row, col);
			if (P458_checkDoiXung_DuongCheoPhu(a9, row, col) == true)
			{
				cout << "Ma tran doi xung qua duong cheo phu" << endl;
			}
			else
			{
				cout << "Ma tran khong doi xung qua duong cheo phu" << endl;
			}
		}
		else if (choice == 10)
		{
			float a10[100][100], b10[100][100], c10[100][100];
			int row1, col1, row2, col2;
			cout << "Nhap ma tran vuong A: " << endl;
			input_Square_Matrix(a10, row1, col1);
			cout << "\nNhap ma tran vuong B: " << endl;
			input_Square_Matrix(b10, row2, col2);
			cout << "\nMa tran A: " << endl;
			output_Float(a10, row1, col1);
			cout << "\nMa tran B: " << endl;
			output_Float(b10, row2, col2);

			cout << "\nTich 2 ma tran: " << endl;
			P471_Mul_2_Matrix(a10, b10, c10, row1, col1, row2, col2);
			output_Float(c10, row1, col2);
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