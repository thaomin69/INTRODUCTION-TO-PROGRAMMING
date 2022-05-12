#include "Function.h"

void input_SoThuc(double& n)
{
	cout << "Nhap vao so thuc x: ";
	cin >> n;
}
void input_SoNguyenKhongAm(int& n)
{
	do
	{
		cout << "Nhap vao so nguyen khong am n (0 <= n <= 10^9): ";
		cin >> n;
	} while ((n < 0 || n > 1000000000) && cout << "Vui long nhap (0 <= n <= 10^9)" << endl);
}
void input_ABC_PTBac2(double& a, double& b, double& c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
void input_SoNguyenDuong(int& n)
{
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while ((n <= 0 || n > 1000000000) && cout << "Vui long nhap (0 < n <= 10^9)" << endl);
}
void input_DMY(int& d, int& m, int& y)
{
	do
	{
		cout << "Moi nhap ngay (1 <= day <= 28, 29, 30, 31): ";
		cin >> d;
		cout << "Moi nhap thang (1 <= month <= 12): ";
		cin >> m;
		cout << "Moi nhap nam (1 <= year <= 10^9): ";
		cin >> y;
	} while (checkDMY(d, m, y) == false);
}

bool checkPrime(int n)
{
	if (n < 2)
	{
		return false;
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % 2 == 0)
		{
			count++;
		}
	}
	if (count > 2)
	{
		return false;
	}
	else 
	{
		return true;
	}
	
}
bool check_LeapYear(int y)
{
	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}
bool checkDMY(int d, int m, int y)
{
	if (d <= 0)
	{
		return false;
	}
	else if ((d > 31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
	{
		return false;
	}
	else if ((d > 30) && (m == 4 || m == 6 || m == 9 || m == 11))
	{
		return false;
	}
	else if (m == 2 && check_LeapYear(y)==true && (d>29))
	{
		return false;
	}
	else if (m == 2 && check_LeapYear(y) == true && (d > 28))
	{
		return false;
	}
	else
	{
		return true;
	}
}

long long giaiThua(int n)
{
	long long giaithua = 1;
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i;
	}
	return giaithua;
}
long double Pow(int a, int b)
{
	double res = 1;
	while (b > 0)
	{
		res *= a;
		b--;
	}
	return res;
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
		if (check_LeapYear(y) == true)
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
int find_MinDigit(int n)
{
	int min = _I32_MAX;
	while (n > 0)
	{
		int temp = n % 10;
		if (temp < min)
		{
			min = temp;
		}
		n /= 10;
	}
	return min;
}
int gcd(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}

int P42_findK(int n)
{
	int sum = 0;
	int i = 0, temp = 0;
	while (true)
	{
		sum += i;
		if (sum >= n)
		{
			temp = (i - 1);
			break;
		}
		i++;
	}
	return temp;
}
int P46_count(int n)
{
	int temp = 0;
	int count = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp % 2 != 0)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}
int P50_reverse(int n)
{
	int m = 0;
	while (n != 0)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	return m;
}
int P54_countMinDigit(int n)
{
	int count = 0;
	int num = find_MinDigit(n);
	while (n > 0)
	{
		int temp = n % 10;
		if (temp == num)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}
bool P58_checkSoTangDan(int n)
{
	bool flag = false;
	int temp = n % 10;
	n /= 10;
	while (n > 0)
	{
		if (temp >= n % 10)
		{
			flag = true;
			//n /= 10;
		}
		else
		{
			flag = false;
			break;
		}
		temp = n % 10;
		n /= 10;
	}
	return flag;
}
void P62_USCLN_XY(int a, int b)
{
	float x = 1;
	float y = ((float)-a / b) * x + (float)gcd(a, b) / b;
	cout << x << " " << y << endl;
}
double P66_TinhTong(int n)
{
	int i = 1;
	double sum = 0, p = 0, mu = -1;
	while (i <= n)
	{
		p += i;
		mu *= (-1);
		sum = sum + mu * (1 / p);
		i++;
	}
	return sum;
}
double P70_TinhTong(double x, int n)
{
	double sum = 1;
	for (int i = 0; i <= n; i++)
	{
		sum = sum + Pow(-1, i + 1) * (Pow(x, 2 * i + 1) / giaiThua(2 * i + 1));
	}
	return sum;
}
int P74_SoThuTuCuaNgay(int d, int m, int y)
{
	int count = d, i = 0;
	while (i < m)
	{
		count += numberOfDay_InMonth(i, y);
		i++;
	}
	return count;
}
void P78_ThuaSoNguyenTo(int n)
{
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (checkPrime(i) == true && n % i == 0)
		{
			count++;
			cout << i << " ";
			n /= i;
		}
	}
	cout << endl;
}
int P100_solveQuadratic(double a, double b, double c, double& x1, double& x2)
{
	double delta = 0;
	if (a == 0)
	{
		if (b != 0 && c != 0)
		{
			x1 = -c / b;
			return 0;
		}
		else if (b != 0 && c == 0)
		{
			x1 = 0;
			return 1;
		}
		else if (b == 0 && c != 0)
		{
			return -1;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta == 0)
		{
			x1 = -b / 2 * a;
			return 3;
		}
		else if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			return 4;
		}
		else
		{
			return -1;
		}
	}
}
void P101_tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2)
{
	day2 = day1;
	month2 = month1;
	year2 = year1;
	if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10)
	{
		if (day2 > 0 && day2 < 31)
		{
			day2++;
		}
		else if (day2 == 31)
		{
			month2++;
			day2 = 1;
		}
	}
	else if (month2 == 12)
	{
		if (day2 > 0 && day2 < 31)
		{
			day2++;
		}
		else if (day2 == 31)
		{
			day2 = 1;
			month2 = 1;
			year2++;
		}
	}
	else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)
	{
		if (day2 > 0 && day2 < 30)
		{
			day2++;
		}
		else if (day2 == 30)
		{
			day2 = 1;
			month2++;
		}
	}
	else if (month2 == 2)
	{
		if (check_LeapYear(year2) == 1)
		{
			if (day2 > 0 && day2 < 29)
			{
				day2++;
			}
			else if (day2 == 29)
			{
				day2 = 1;
				month2++;
			}
		}
		else
		{
			if (day2 > 0 && day2 < 28)
			{
				day2++;
			}
			else if (day2 == 28)
			{
				day2 = 1;
				month2++;
			}
		}
	}
	cout << "The next day: " << day2 << "/" << month2 << "/" << year2 << endl;
}