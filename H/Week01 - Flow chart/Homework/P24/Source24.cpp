#include <iostream>
#include <iomanip>
using namespace std;

//P25

int main()
{
	float km, h, m, s;
	cin >> km >> h >> m >> s;

	/*float pace = (h * 60 + m + s / 60) / km;
	float speed = (h + m / 60 + s / 3600) / km;*/

	//cout << (float)(h * 60 + m + (float)s / 60) / km << endl;
	cout << km/(h + m / 60 + s / 3600) << endl;

	return 0;
}