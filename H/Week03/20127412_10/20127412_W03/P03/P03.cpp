#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 9.6
//       8.5
//		 9.3
//       0
//Output: 9.2 PASSED

//Test case 2:
//Input: 8.6
//       7.9
//		 9
//       1
//Output: 0 FAILED

//Test case 3:
//Input: 4.5
//       2.3
//		 3.4
//       0
//Output: 3.4 FAILED

int main()
{
	cout << "------------ P03. DAU HAY ROT ------------" << endl;
	cout << "0 <= assignment, lab, final <= 10" << endl;
	cout << "0 <= cheating <= 1" << endl;
	float bt, lab, lt;
	int cheating;
	do
	{
		cout << "Nhap diem bai tap: ";
		cin >> bt;
		cin.ignore();
		cout << "Nhap diem thuc hanh: ";
		cin >> lab;
		cout << "Nhap diem li thuyet: ";
		cin >> lt;
		cout << "Co gian lan hay khong: ";
		cin >> cheating;
	} while (bt < 0 || lab < 0 || lt < 0 || bt >10 || lab > 10 || lt > 10 || cheating < 0 || cheating > 1);

	float total = bt * 0.3 + lab * 0.3 + lt * 0.4;
	if ((total >= 0 && total <= 10) && cheating == 1)
	{
		cout << "0" << " " << "FAILED" << endl;
	}
	else if (total < 5 && cheating == 0)
	{
		cout << total << " " << "FAILED" << endl;
	}
	else if ((total >= 5 && total <= 10) && cheating == 0)
	{
		cout << fixed << setprecision(1) << total << " " << "PASSED" << endl;
	}

	system("pause");
	return 0;
}