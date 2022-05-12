#include "Date.h"

int checkLeapYear(int x)
{
	return (x % 4 == 0 || ((x % 400 == 0) && (x % 100 != 0)));
}
int check_Input(int& x)
{
	while (!(cin >> x))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Please enter a number not a word: ";
	}
	return x;
}
void input_Date(Date& x)
{
	cout << "Enter year: ";
	check_Input(x.year);
	if (x.year <= 0)
	{
		cout << "Enter year (year > 0): ";
		while (true)
		{
			cin >> x.year;
			if (x.year <= 0)
			{
				cout << "Enter year (year > 0): ";
			}
			else
			{
				break;
			}
		}
	}

	cout << "Enter month: ";
	check_Input(x.month);
	if (x.month < 1 || x.month > 12)
	{
		cout << "Enter month (1 < month < 12): ";
		while (true)
		{
			cin >> x.month;
			if (x.month <= 0)
			{
				cout << "Enter month (1 < month < 12): ";
			}
			else
			{
				break;
			}
		}
	}

	cout << "Enter day: ";
	check_Input(x.day);
	if (x.day < 1 || ((x.day > 31) && (x.month == 1 || x.month == 3 || x.month == 5 || x.month == 7 || x.month == 8 || x.month == 10 || x.month == 12)))
	{
		cout << "Enter day (1 < day <= 31): ";
		while (true)
		{
			cin >> x.day;
			if (x.day > 31 || x.day < 1)
			{
				cout << "Enter day (1 < day <= 31): ";
			}
			else
			{
				break;
			}
		}
	}
	else if (x.day < 1 || ((x.day > 30) && (x.month == 4 || x.month == 6 || x.month == 9 || x.month == 11)))
	{
		cout << "Enter day (1 < day <= 30): ";
		while (true)
		{
			cin >> x.day;
			if (x.day > 30 || x.day < 1)
			{
				cout << "Enter day (1 < day <= 30): ";
			}
			else
			{
				break;
			}
		}
	}
	else if (x.day < 1 || (x.month == 2 && checkLeapYear(x.year) == 1 && (x.day > 29)))
	{
		cout << "Enter day (1 < day <= 29): ";
		while (true)
		{
			cin >> x.day;
			if (x.day > 29 || x.day < 1)
			{
				cout << "Enter day (1 < day <= 29): ";
			}
			else
			{
				break;
			}
		}
	}
	else if (x.day < 1 || (x.month == 2 && checkLeapYear(x.year) == 0 && (x.day > 28)))
	{
		cout << "Enter day (1 < day <= 28): ";
		while (true)
		{
			cin >> x.day;
			if (x.day > 28 || x.day < 1)
			{
				cout << "Enter day (1 < day <= 28): ";
			}
			else
			{
				break;
			}
		}
	}
}
void output_Date(Date& x)
{
	cout << x.year << "-";
	if (x.month < 10)
	{
		cout << "0" << x.month;
	}
	else
	{
		cout << x.month;
	}
	cout << "-";
	if (x.day < 10)
	{
		cout << "0" << x.day;
	}
	else
	{
		cout << x.day;
	}
}

int compare_2_Date(Date a, Date b)
{
	if (a.year > b.year)
	{
		return 1;
	}
	else if (a.year < b.year)
	{
		return -1;
	}
	else
	{
		if (a.month > b.month)
		{
			return 1;
		}
		else if (a.month < b.month)
		{
			return -1;
		}
		else
		{
			if (a.day > b.day)
			{
				return 1;
			}
			else if (a.day < b.day)
			{
				return -1;
			}
			else
			{
				return 2;
			}
		}
	}
}
Date find_Tomorrow(Date x)
{
	Date temp = x;
	if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10)
	{
		if (temp.day > 0 && temp.day < 31)
		{
			temp.day++;
		}
		else if (temp.day == 31)
		{
			temp.month++;
			temp.day = 1;
		}
	}
	else if (temp.month == 12)
	{
		if (temp.day > 0 && temp.day < 31)
		{
			temp.day++;
		}
		else if (temp.day == 31)
		{
			temp.day = 1;
			temp.month = 1;
			temp.year++;
		}
	}
	else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11)
	{
		if (temp.day > 0 && temp.day < 30)
		{
			temp.day++;
		}
		else if (x.day == 30)
		{
			temp.day = 1;
			temp.month++;
		}
	}
	else if (temp.month == 2)
	{
		if (checkLeapYear(temp.year) == 1)
		{
			if (temp.day > 0 && temp.day < 29)
			{
				temp.day++;
			}
			else if (temp.day == 29)
			{
				temp.day = 1;
				temp.month++;
			}
		}
		else
		{
			if (temp.day > 0 && temp.day < 28)
			{
				temp.day++;
			}
			else if (temp.day == 28)
			{
				temp.day = 1;
				temp.month++;
			}
		}
	}
	return temp;
}
Date find_Yesterday(Date x)
{
	Date temp = x;
	if (temp.month == 2 || temp.month == 4 || temp.month == 6 || temp.month == 8 || temp.month == 9 || temp.month == 11)
	{
		if (temp.day > 1)
		{
			temp.day--;
		}
		else if (temp.day == 1)
		{
			temp.day = 31;
			temp.month--;
		}
	}
	else if (temp.month == 1)
	{
		if (temp.day > 1)
		{
			temp.day--;
		}
		else if (temp.day == 1)
		{
			temp.day = 31;
			temp.month = 12;
			temp.year--;
		}
	}
	else if (temp.month == 3)
	{
		if (temp.day > 1)
		{
			temp.day--;
		}
		else if (temp.day == 1)
		{
			temp.month--;
			if (checkLeapYear(temp.year) == 1)
			{
				temp.day = 29;
			}
			else if (checkLeapYear(temp.year) == 0)
			{
				temp.day = 28;
			}
		}
	}
	else if (temp.month == 5 || temp.month == 7 || temp.month == 10 || temp.month == 12)
	{
		if (temp.day > 1)
		{
			temp.day--;
		}
		else if (temp.day == 1)
		{
			temp.day = 30;
			temp.month--;
		}
	}
	return temp;
}

Date createDate(const int& d, const int& m, const int& y)
{
	Date date;
	date.day = d;
	date.month = m;
	date.year = y;
	return date;
}
void readFile(fstream& inDev, const char FileName[], Date& date)
{
	char c;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
	}
	else
	{
		while (!inDev.eof())
		{
			inDev >> date.year >> c >> date.month >>c >> date.day;
		}
		inDev.close();
	}
}
void readFile2(fstream& inDev, const char FileName[], Date& date1, Date&date2)
{
	char c;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
	}
	else
	{
		while (!inDev.eof())
		{
			inDev >> date1.year >> c >> date1.month >> c >> date1.day;
			inDev >> date2.year >> c >> date2.month >> c >> date2.day;
		}
		inDev.close();
	}
}
void writeFile(fstream& outDev, const char FileName[], Date& date)
{
	char c = '-';
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
	}
	else
	{
		outDev << date.year << c << date.month << c << date.day;
		outDev.close();
	}
}