#include "Date.h"

int main()
{
	//ifstream fi("input.txt");
	//int d, m, y;
	//Date date;
	//char c;
	//
	//while (!fi.eof())
	//{
	//	fi >> y >> c >> m >> c >> d;
	//	date = createDate(d, m, y);
	//	cout << date.year << "-" << date.month << "-" << date.day << endl;
	//}
	//fi.close();

	//ofstream fo("output.txt", ios::ate);
	//fi.open("input.txt");
	//while (!fi.eof())
	//{
	//	fi >> y >> c >> m >> c >> d;
	//	date = createDate(d, m, y);
	//	//cout << date.year << "-" << date.month << "-" << date.day << endl;
	//	fo << date.year << "-" << date.month << "-" << date.day << endl;
	//}
	//fi.close();
	//fo.close(); 

	
	int choice;
	Date date = {1,1,2002};
	Date date1, date2;
	while (true)
	{
		system("cls");
		cout << "======================== MENU ========================" << endl;
		cout << "1. Input a date" << endl;
		cout << "2. Output a date (yyyy-MM-dd)" << endl;
		cout << "3. Compare 2 date" << endl;
		cout << "4. Find tomorrow" << endl;
		cout << "5. Find yesterday" << endl;
		cout << "0. Exit" << endl;
		cout << "======================== END ========================" << endl;

		cout << "Moi thay nhap lua chon" << endl;
		cin >> choice;

		if (choice == 1)
		{
			fstream fi;
			readFile(fi, "input.txt", date);
			cout << "The date: ";
			output_Date(date);
			cout << endl;

			fstream fo;
			writeFile(fo, "output.txt", date);
		}
		else if (choice == 2)
		{
			cout << "The date: ";
			output_Date(date);
			cout << endl;
			fstream fo;
			writeFile(fo, "output.txt", date);
		}
		else if (choice == 3)
		{
			fstream fi;
			readFile2(fi, "input2.txt", date1, date2);
			cout << "\nCOMPARE 2 DATE" << endl;
			if (compare_2_Date(date1, date2) == 1)
			{
				output_Date(date1);
				cout << " > ";
				output_Date(date2);
			}
			else if (compare_2_Date(date1, date2) == -1)
			{
				output_Date(date1);
				cout << " < ";
				output_Date(date2);
			}
			else if (compare_2_Date(date1, date2) == 2)
			{
				output_Date(date1);
				cout << " = ";
				output_Date(date2);
			}
			cout << endl;
		}
		else if (choice == 4)
		{
			fstream fi;
			readFile(fi, "input.txt", date);
			Date dd = find_Tomorrow(date);
			cout << "Tomorrow of ";
			output_Date(date);
			cout << " is ";
			output_Date(dd);
			cout << endl;

			fstream fo;
			writeFile(fo, "output.txt", dd);
		}
		else if (choice == 5)
		{
			fstream fi;
			readFile(fi, "input.txt", date);
			Date ddd = find_Yesterday(date);
			cout << "Yesterday of ";
			output_Date(date);
			cout << " is ";
			output_Date(ddd);
			cout << endl;

			fstream fo;
			writeFile(fo, "output.txt", ddd);
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