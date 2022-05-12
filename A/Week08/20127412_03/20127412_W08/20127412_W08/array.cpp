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
float tong_So_Am(float a[][100], int row, int col)
{
	float sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] < 0)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}