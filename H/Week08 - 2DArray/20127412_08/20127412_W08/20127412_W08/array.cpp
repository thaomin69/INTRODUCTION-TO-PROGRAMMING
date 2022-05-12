#include "arrray.h"

void input_Float(float a[][100], int& row, int& col)
{
	do
	{
		cout << "Nhap so dong > 0: ";
		cin >> row;
		cout << "Nhap so cot > 0: ";
		cin >> col;
	} while (row <= 0 || col <= 0);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << endl;
}
void output_Float(float a[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void input_Int(int a[][100], int& row, int& col)
{
	do
	{
		cout << "Nhap so dong > 0: ";
		cin >> row;
		cout << "Nhap so cot > 0: ";
		cin >> col;
	} while (row <= 0 || col <= 0);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << endl;
}
void input_Square_Matrix(float a[][100], int& row, int& col)
{
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;
	if (col != row)
	{
		cout << "Vui long nhap so cot = so dong: ";
		while (true)
		{
			cin >> col;
			if (col != row)
			{
				cout << "Vui long nhap so cot = so dong : ";
			}
			else
			{
				break;
			}
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void output_Int(int a[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


float P320_sum_Of_Float_Positive_Number(float a[][100], int row, int col)
{
	float sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] > 0)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}
//int count_Max(float a[][100], int row, int col)
//{
//	int count = 0;
//	float max = a[0][0];
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (a[i + 1][j + 2] > a[i][j])
//			{
//				max = a[i + 1][j + 2];
//				count++;
//			}
//		}
//	}
//	return count;
//}

int P347_count_YenNgua(float a[][100], int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (check_Max_In_Row(a, i, j, col) == true && check_Min_In_Col(a, i, j, row) == true)
			{
				count++;
			}
		}
	}
	return count;
}
void P402_XoayMatran_90(float a[][100],float a2[][100], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		int k = row - 1;
		for (int j = 0; j < row; j++)
		{
			a2[i][j] = a[k][i];
			k--;
		}
	}
}
float P438_tongMaTranTamGiacTren_Chinh(float a[][100], int row, int col)
{
	float sum = 0;
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = i + 1; j < col; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}
void P423_sapXepMaTranTangDanXoanOc(float a[][100], float a1[], int row, int col)
{
	int temp = 0;
	int row_min = 0;
	int row_max = row;
	int col_min = 0;
	int col_max = col;

	while (row_min < row_max && col_min < col_max)
	{
		for (int i = col_min; i < col_max; i++)
		{
			a[row_min][i] = a1[temp];
			temp++;
		}
		row_min++;

		for (int i = row_min; i < row_max; i++)
		{
			a[i][col_max - 1] = a1[temp];
			temp++;
		}
		col_max--;

		if (row_min < row_max)
		{
			for (int i = col_max - 1; i >= col_min; i--)
			{
				a[row_max - 1][i] = a1[temp];
				temp++;
			}
			row_max--;
		}
		

		if (col_min < col_max)
		{
			for (int i = row_max - 1; i >= row_min; i--)
			{
				a[i][col_min] = a1[temp];
				temp++;
			}
			col_min++;
		}
	}
}
float P438_tongMaTranTamGiacTren_Phu(float a[][100], int row, int col)
{
	float sum = 0;
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < col - i - 1; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}
bool P457_checkDoiXung_DuongCheoChinh(float a[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] != a[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
bool P458_checkDoiXung_DuongCheoPhu(float a[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] != a[row - j - 1][col - i - 1])
			{
				return false;
			}
		}
	}
	return true;
}
void P471_Mul_2_Matrix(float a[][100], float b[][100], float c[][100], int row1, int col1, int row2, int col2)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < col1; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

bool check_Max_In_Row(float a[][100], int row_th, int col_th, int col)
{
	float max = a[row_th][col_th];
	for (int j = 0; j < col; j++)
	{
		if (max < a[row_th][j])
		{
			return false;
		}
	}
	return true;
}
bool check_Min_In_Col(float a[][100], int row_th, int col_th, int row)
{
	float min = a[row_th][col_th];
	for (int i = 0; i < row; i++)
	{
		if (min > a[i][col_th])
		{
			return false;
		}
	}
	return true;
}
void MaTranChuyenVi(float a[][100], float b[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			b[i][j] = a[j][i];
		}
	}
}
void swap(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void ascending(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void twoTo1Array(float a[][100], float a1[], int m, int n, int& k)
{
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[k++] = a[i][j];
		}
	}
}