#include "function.h"

//-----------------------------------------------------------------------------------------------------------
//DATE

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
	cout << x.year << "-" << x.month << "-" << x.day;
}
void outputDateWithFormat(Date x, const char format[])
{
	//char format1[] = "yyyy-MM-dd";
	//char format2[] = "MMM dd yy";
	if (format == "yyyy-MM-dd")
	{
		cout << x.year << " - ";
		if (x.month >= 10)
		{
			cout << x.month << " - ";
		}
		else
		{
			cout << "0" << x.month << " - ";
		}
		if (x.day >= 10)
		{
			cout << x.day;
		}
		else
		{
			cout << "0" << x.day;
		}
	}
	else if (format == "MMM dd yy")
	{
		if (x.month == 12)
		{
			cout << "Dec ";
		}
		else if (x.month == 11)
		{
			cout << "Nov ";
		}
		else if (x.month == 10)
		{
			cout << "Oct ";
		}
		else if (x.month == 9)
		{
			cout << "Sep ";
		}
		else if (x.month == 8)
		{
			cout << "Aug ";
		}
		else if (x.month == 7)
		{
			cout << "Jul ";
		}
		else if (x.month == 6)
		{
			cout << "Jun ";
		}
		else if (x.month == 5)
		{
			cout << "May ";
		}
		else if (x.month == 4)
		{
			cout << "Apr ";
		}
		else if (x.month == 3)
		{
			cout << "Mar ";
		}
		else if (x.month == 2)
		{
			cout << "Feb ";
		}
		else if (x.month == 1)
		{
			cout << "Jan ";
		}
		if (x.day >= 10)
		{
			cout << x.day << " ";
		}
		else
		{
			cout << "0" << x.day << " ";
		}
		int temp = x.year % 100;
		if (temp >= 10)
		{
			cout << temp;
		}
		else
		{
			if (temp == 0)
			{
				cout << "00";
			}
			else
			{
				cout << "0" << temp;
			}
		}
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
	//if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10)
	//{
	//	if (temp.day > 0 && temp.day < 31)
	//	{
	//		temp.day++;
	//	}
	//	else if (temp.day == 31)
	//	{
	//		temp.month++;
	//		temp.day = 1;
	//	}
	//}
	//else if (temp.month == 12)
	//{
	//	if (temp.day > 0 && temp.day < 31)
	//	{
	//		temp.day++;
	//	}
	//	else if (temp.day == 31)
	//	{
	//		temp.day = 1;
	//		temp.month = 1;
	//		temp.year++;
	//	}
	//}
	//else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11)
	//{
	//	if (temp.day > 0 && temp.day < 30)
	//	{
	//		temp.day++;
	//	}
	//	else if (x.day == 30)
	//	{
	//		temp.day = 1;
	//		temp.month++;
	//	}
	//}
	//else if (temp.month == 2)
	//{
	//	if (checkLeapYear(temp.year) == 1)
	//	{
	//		if (temp.day > 0 && temp.day < 29)
	//		{
	//			temp.day++;
	//		}
	//		else if (temp.day == 29)
	//		{
	//			temp.day = 1;
	//			temp.month++;
	//		}
	//	}
	//	else
	//	{
	//		if (temp.day > 0 && temp.day < 28)
	//		{
	//			temp.day++;
	//		}
	//		else if (temp.day == 28)
	//		{
	//			temp.day = 1;
	//			temp.month++;
	//		}
	//	}
	//}
	//return temp;
	increase_Date_by_k_days(temp, 1);
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
Date increase_Date_by_k_days(Date& temp, int k)
{
	while (k != 0)
	{
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
			else if (temp.day == 30)
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
		k--;
	}
	return temp;
}
Date decrease_Date_by_k_days(Date& temp, int k)
{
	int res = 1;
	while (res <= k)
	{
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
		res++;
	}
	return temp;
}
int compute_distance_Date_1_1_SameYear(Date x)
{
	int count = x.day - 1, i = 0;
	while (i < x.month)
	{
		count += numberOfDay_InMonth(i, x.year);
		i++;
	}
	return count;
}
int compute_distance_Date_1_1_1970(Date x)
{
	Date y;
	y.day = 1;
	y.month = 1;
	y.year = 1970;

	return compute_distance_Date_Date(x, y);
}
int compute_distance_Date_Date(Date x, Date y)
{
	int a = compute_distance_Date_1_1_1(x);
	int b = compute_distance_Date_1_1_1(y);
	return abs(a - b);
}
int compute_The_Date_of_Week(Date x)
{
	x.year -= (14 - x.month) / 12;
	x.month += 12 * ((14 - x.month) / 12) - 2;
	int dateOfWeek = (x.day + x.year + x.year / 4 - x.year / 100 + x.year / 400 + (31 * x.month) / 12) % 7;
	if (!dateOfWeek)
	{
		return 8;
	}
	else
	{
		return dateOfWeek + 1;
	}
}
void print_The_Date_of_week(Date x)
{
	if (compute_The_Date_of_Week(x) == 8)
	{
		cout << "Sunday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 7)
	{
		cout << "Saturday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 6)
	{
		cout << "Friday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 5)
	{
		cout << "Thursday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 4)
	{
		cout << "Wednesday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 3)
	{
		cout << "Tuesday" << endl;
	}
	else if (compute_The_Date_of_Week(x) == 2)
	{
		cout << "Monday" << endl;
	}
}

int numberOfDay_InMonth(int m, int y)
{
	int d = 0;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		d = 31;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		d = 30;
	}
	else if (m == 2)
	{
		if (checkLeapYear(y) == true)
		{
			d = 29;
		}
		else
		{
			d = 28;
		}
	}
	return d;
}
int compute_distance_Date_1_1_1(Date a)
{
	int k = 0;
	for (int i = 1; i < a.year; i++)
	{
		if (checkLeapYear(i) == 1)
		{
			k += 366;
		}
		else
		{
			k += 365;
		}
	}
	return k + compute_distance_Date_1_1_SameYear(a);
}

Date createDate(const int& d, const int& m, const int& y)
{
	Date date;
	date.day = d;
	date.month = m;
	date.year = y;
	return date;
}
void readFileDate(fstream& inDev, const char FileName[], Date& date)
{
	char c;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		inDev.close();
	}
	else
	{
		while (!inDev.eof())
		{
			inDev >> date.year >> c >> date.month >> c >> date.day;
		}
		inDev.close();
	}
}
void readFile2Date(fstream& inDev, const char FileName[], Date& date1, Date& date2)
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
void writeFileDate(fstream& outDev, const char FileName[], Date& date)
{
	char c = '-';
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		outDev << "Cannot open file" << endl;
	}
	else
	{
		outDev << date.year << c << date.month << c << date.day;
		outDev.close();
	}
}
void writeFileDateFormat(fstream& outDev, const char FileName[], Date& date, const char format[])
{
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		outDev << "Cannot open file" << endl;
	}
	else
	{
		int temp = date.year % 100;
		if (format == "yyyy-MM-dd")
		{
			char c = '-';
			outDev << date.year << " " << c << " " << date.month << " " << c << " " << date.day;
		}
		else if (format == "MMM dd yy")
		{
			if (date.month == 12)
			{
				outDev << "Dec ";
			}
			else if (date.month == 11)
			{
				outDev << "Nov ";
			}
			else if (date.month == 10)
			{
				outDev << "Oct ";
			}
			else if (date.month == 9)
			{
				outDev << "Sep ";
			}
			else if (date.month == 8)
			{
				outDev << "Aug ";
			}
			else if (date.month == 7)
			{
				outDev << "Jul ";
			}
			else if (date.month == 6)
			{
				outDev << "Jun ";
			}
			else if (date.month == 5)
			{
				outDev << "May ";
			}
			else if (date.month == 4)
			{
				outDev << "Apr ";
			}
			else if (date.month == 3)
			{
				outDev << "Mar ";
			}
			else if (date.month == 2)
			{
				outDev << "Feb ";
			}
			else if (date.month == 1)
			{
				outDev << "Jan ";
			}
			if (date.day >= 10)
			{
				outDev << date.day << " ";
			}
			else
			{
				outDev << "0" << date.day << " ";
			}
			int temp = date.year % 100;
			if (temp >= 10)
			{
				outDev << temp;
			}
			else
			{
				if (temp == 0)
				{
					outDev << "00";
				}
				else
				{
					outDev << "0" << temp;
				}
			}
		}
		outDev.close();
	}
}
void writeFileDistance(fstream& outDev, const char FileName[], int n)
{
	outDev.open(FileName, ios::out);
	if (outDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
	}
	else
	{
		outDev << n;
		outDev.close();
	}
}
void writeFielDateOfWeek(fstream& outDev, const char FileName[], Date& d)
{
	outDev.open(FileName, ios::out);
	if (outDev.fail() == true)
	{
		outDev << "Cannot open file" << endl;
	}
	else
	{
		if (compute_The_Date_of_Week(d) == 2)
		{
			outDev << "Monday";
		}
		else if (compute_The_Date_of_Week(d) == 3)
		{
			outDev << "Tuesday";
		}
		else if (compute_The_Date_of_Week(d) == 4)
		{
			outDev << "Wednesday";
		}
		else if (compute_The_Date_of_Week(d) == 5)
		{
			outDev << "Thursday";
		}
		else if (compute_The_Date_of_Week(d) == 6)
		{
			outDev << "Friday";
		}
		else if (compute_The_Date_of_Week(d) == 7)
		{
			outDev << "Saturday";
		}
		else if (compute_The_Date_of_Week(d) == 8)
		{
			outDev << "Sunday";
		}
	}
}

//-----------------------------------------------------------------------------------------------------------
//STUDENT

void input_Student(Student& s)
{
	cout << "Enter id: ";
	cin >> s.id;
	cin.ignore();
	cout << "Enter full name: ";
	cin.getline(s.full_name, 99);
	cout << "Enter gpa: ";
	fflush(stdin);
	cin >> s.gpa;
	cin.ignore();
	cout << "Enter address: ";
	cin.getline(s.address, 99);
	cout << "Enter date of birth: " << endl;
	input_Date(s.dob);
}
void output_Student(Student s)
{
	cout << "ID: " << s.id << endl;
	cout << "Full name: " << s.full_name << endl;
	cout << "GPA: " << s.gpa << endl;
	cout << "Address: " << s.address << endl;
	cout << "Date of birth: ";
	output_Date(s.dob);
	cout << endl;
}
void output_Student2(Student s)
{
	char last_name[15] = "\0";
	char first_name[15] = "\0";
	char temp[15] = "\0";
	int count = 0, l = 0, f = 0, t = 0;
	int currentYear = 2021;

	cout << "\n------------------- INFORMATION OF STUDENT -------------------" << endl;
	cout << "ID: " << s.id << endl;
	for (int i = 0; i < strlen(s.full_name); i++)
	{
		if (s.full_name[i] == ' ')
		{
			count++;
		}
		if (count == 0)
		{
			last_name[l++] = s.full_name[i];
		}
	}
	for (int i = strlen(s.full_name) - 1; i >= 0; i--)
	{
		temp[t++] = s.full_name[i];
		if (s.full_name[i] == ' ')
		{
			break;
		}
	}
	for (int i = strlen(temp) - 2; i >= 0; i--)
	{
		first_name[f++] = temp[i];
	}
	cout << "Last name: " << last_name << endl;
	cout << "First name: " << first_name << endl;
	cout << "GPA: " << s.gpa << endl;
	cout << "Address: " << s.address << endl;
	cout << "Date of birth: ";
	output_Date(s.dob);
	cout << "\nAge: " << 2021 - s.dob.year << endl;
	cout << endl;
}
void extract_Class(Student s)//20127412
{
	int temp = s.id / 1000000;
	cout << "is in K" << temp << " class" << endl;
}
int compare_by_ID(Student a, Student b)
{
	if (a.id > b.id)
	{
		return 1;
	}
	else if (a.id < b.id)
	{
		return 2;
	}
}
int compare_by_GPA_ID(Student a, Student b)
{
	compareByGPA(a, b);
	return compare_by_ID(a, b);
}
int compare_by_NAME_ID(Student a, Student b)
{
	if (strcmp(a.full_name, b.full_name) > 0)
	{
		return 1;
	}
	else if (strcmp(a.full_name, b.full_name) < 0)
	{
		return 2;
	}
	else
	{
		return compare_by_ID(a, b);
	}
}
int compare_by_FirstName_ID(Student a, Student b)
{
	compareByFirstName(a, b);
	return compare_by_ID(a, b);
}
int compare_by_LastName_ID(Student a, Student b)
{
	char last_nameA[15] = "\0";
	int countA = 0, countB = 0, lA = 0, lB = 0;
	for (int i = 0; i < strlen(a.full_name); i++)
	{
		if (a.full_name[i] == ' ')
		{
			countA++;
		}
		if (countA == 0)
		{
			last_nameA[lA++] = a.full_name[i];
		}
	}

	char last_nameB[15] = "\0";
	for (int i = 0; i < strlen(b.full_name); i++)
	{
		if (b.full_name[i] == ' ')
		{
			countB++;
		}
		if (countB == 0)
		{
			last_nameB[lB++] = b.full_name[i];
		}
	}

	if (strcmp(last_nameA, last_nameB) > 0)
	{
		return 1;
	}
	else if (strcmp(last_nameA, last_nameB) < 0)
	{
		return 2;
	}
	else
	{
		return compare_by_ID(a, b);
	}
}
int compare_by_DOB_ID(Student a, Student b)
{
	if (compare_2_Date(a.dob, b.dob) == 1)
	{
		return 2;
	}
	else if (compare_2_Date(a.dob, b.dob) == -1)
	{
		return 1;
	}
	else if (compare_2_Date(a.dob, b.dob) == 2)
	{
		return compare_by_ID(a, b);
	}
}

void readFileStudent(fstream& inDev, const char FileName[], Student& s)
{
	char c;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		inDev.close();
	}
	else
	{
		while (!inDev.eof())
		{
			inDev >> s.id >> c;
			inDev.getline(s.full_name, 70, ',');
			inDev >> s.gpa >> c;
			inDev.getline(s.address, 70, ',');
			inDev >> s.dob.year >> c >> s.dob.month >> c >> s.dob.day;
		}
		inDev.close();
	}
}
void readFile2Student(fstream& inDev, const char FileName[], Student& s1, Student &s2)
{
	char c;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		inDev.close();
	}
	else
	{
		while (!inDev.eof())
		{
			inDev >> s1.id >> c;
			inDev.getline(s1.full_name, 70, ',');
			inDev >> s1.gpa >> c;
			inDev.getline(s1.address, 70, ',');
			inDev >> s1.dob.year >> c >> s1.dob.month >> c >> s1.dob.day;

			inDev >> s2.id >> c;
			inDev.getline(s2.full_name, 70, ',');
			inDev >> s2.gpa >> c;
			inDev.getline(s2.address, 70, ',');
			inDev >> s2.dob.year >> c >> s2.dob.month >> c >> s2.dob.day;
		}
		inDev.close();
	}
}
void writeFileStudent(fstream& outDev, const char FileName[], Student& s)
{
	char c = ',';
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		outDev.close();
	}
	else
	{
		outDev << s.id << c << s.full_name << c << s.gpa << c << s.address << c << s.dob.year << '-' << s.dob.month << '-' << s.dob.day;
		outDev.close();
	}
}
void writeFileClassOfStudent(fstream& outDev, const char FileName[], Student& s)
{
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		outDev.close();
	}
	else
	{
		outDev << s.full_name << " is in K" << s.id / 1000000 << " class";
		outDev.close();
	}
}

//-----------------------------------------------------------------------------------------------------------
//COURSE

void readFileCourse(fstream& inDev, const char FileName[], Course& c)
{
	char temp;
	inDev.open(FileName, ios_base::in);
	if (inDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		inDev.close();
		return;
	}
	else
	{
		while (!inDev.eof())
		{
			inDev.getline(c.course_id, 49);
			inDev.getline(c.course_name, 99);
			inDev >> c.size;
			cin.ignore();
			for (int i = 0; i < c.size; i++)
			{
				inDev >> c.array_Student[i].id >> temp;
				inDev.getline(c.array_Student[i].full_name,70, ',');
				inDev >> c.array_Student[i].gpa >> temp;
				inDev.getline(c.array_Student[i].address, 70, ',');
				inDev >> c.array_Student[i].dob.year >> temp >> c.array_Student[i].dob.month >> temp >> c.array_Student[i].dob.day;
			}
			inDev.ignore();
			inDev >> c.status;
			inDev >> c.max_Students;
			inDev >> c.min_Students;
		}
		inDev.close();
	}
}
void writeFileCourse(fstream& outDev, const char FileName[], Course c)
{
	char temp = ',';
	outDev.open(FileName, ios_base::out);
	if (outDev.fail() == true)
	{
		cout << "Cannot open file" << endl;
		outDev.close();
	}
	else
	{
		outDev << "\n----------------------------- INFORMATION OF COURSE -----------------------------" << endl;
		outDev << "ID Course: " << c.course_id << endl;
		outDev << "Name Course: " << c.course_name << endl;
		outDev << "Information of students in the course: " << endl;
		for (int i = 0; i < c.size; i++)
		{
			outDev << "\n------------------- THE INFOMATION OF STUDENT " << i + 1 << " -------------------" << endl;
			outDev << "ID: " << c.array_Student[i].id << endl;
			outDev << "Full name: " << c.array_Student[i].full_name << endl;
			outDev << "GPA: " << c.array_Student[i].gpa << endl;
			outDev << "Address: " << c.array_Student[i].address << endl;
			outDev << "DOB: " << c.array_Student[i].dob.year << '-' << c.array_Student[i].dob.month << '-' << c.array_Student[i].dob.day << endl;
		}
		
		outDev << "\nStatus of the course: " << c.status << endl;
		outDev << "The maximum number of students in the course: " << c.max_Students << endl;
		outDev << "The minimum number of students in the course: " << c.min_Students << endl;
		outDev << "-------------------------------------------------------------------------------------" << endl;
	}
}
void output_Course(Course c)
{
	cout << "\n----------------------------- INFORMATION OF COURSE -----------------------------" << endl;
	cout << "ID Course: " << c.course_id << endl;
	cout << "Name Course: " << c.course_name << endl;
	cout << "Information of students in the course: \n\n";
	for (int i = 0; i < c.size; i++)
	{
		cout << "------------------- THE INFOMATION OF STUDENT " << i + 1 << " -------------------" << endl;
		output_Student(c.array_Student[i]);
		cout << endl;
	}
	cout << "Status of the course: " << c.status << endl;
	cout << "The maximum number of students in the course: " << c.max_Students << endl;
	cout << "The minimum number of students in the course: " << c.min_Students << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
}
void sortStudentByID(Course& c)
{
	for (int i = 0; i < c.size - 1; i++)
	{
		for (int j = i + 1; j < c.size; j++)
		{
			if (compare_by_ID(c.array_Student[i], c.array_Student[j]) == 1)
			{
				swap(c.array_Student[i], c.array_Student[j]);
			}
		}
	}
}
void sortStudentByFirstname(Course& c)
{
	for (int i = 0; i < c.size - 1; i++)
	{
		for (int j = i + 1; j < c.size; j++)
		{
			if (compareByFirstName(c.array_Student[i], c.array_Student[j]) == 1)
			{
				swap(c.array_Student[i], c.array_Student[j]);
			}
		}
	}
}
void sortStudentByGPA(Course& c)
{
	for (int i = 0; i < c.size - 1; i++)
	{
		for (int j = i + 1; j < c.size; j++)
		{
			if (compareByGPA(c.array_Student[i], c.array_Student[j]) == 1)
			{
				swap(c.array_Student[i], c.array_Student[j]);
			}
		}
	}
}
void sortStudentByDOB(Course& c)
{
	for (int i = 0; i < c.size - 1; i++)
	{
		for (int j = i + 1; j < c.size; j++)
		{
			if (compare_2_Date(c.array_Student[i].dob, c.array_Student[j].dob) == -1)
			{
				swap(c.array_Student[i], c.array_Student[j]);
			}
		}
	}
}

void swap(Course& a, Course& b)
{
	Course temp = a;
	a = b;
	b = temp;
}
int compareByFirstName(Student a, Student b)
{
	char first_nameA[15] = "\0";
	char tempA[15] = "\0";
	int fA = 0, tA = 0;
	for (int i = strlen(a.full_name) - 1; i >= 0; i--)
	{
		tempA[tA++] = a.full_name[i];
		if (a.full_name[i] == ' ')
		{
			break;
		}
	}
	for (int i = strlen(tempA) - 2; i >= 0; i--)
	{
		first_nameA[fA++] = tempA[i];
	}

	char first_nameB[15] = "\0";
	char tempB[15] = "\0";
	int fB = 0, tB = 0;
	for (int i = strlen(b.full_name) - 1; i >= 0; i--)
	{
		tempB[tB++] = b.full_name[i];
		if (b.full_name[i] == ' ')
		{
			break;
		}
	}
	for (int i = strlen(tempB) - 2; i >= 0; i--)
	{
		first_nameB[fB++] = tempB[i];
	}

	if (strcmp(first_nameA, first_nameB) > 0)
	{
		return 1;
	}
	else if (strcmp(first_nameA, first_nameB) < 0)
	{
		return 2;
	}
}
int compareByGPA(Student a, Student b)
{
	if (a.gpa > b.gpa)
	{
		return 1;
	}
	else if (a.gpa < b.gpa)
	{
		return 2;
	}
}