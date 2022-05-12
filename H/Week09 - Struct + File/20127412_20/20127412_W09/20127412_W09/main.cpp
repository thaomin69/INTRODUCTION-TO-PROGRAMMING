#include "function.h"

int main()
{
	int type;
	Date date { 1,1,2002 };
	Date date1, date2;
	Student s { 0, "NAMELESS", 0, "HOMELESS", date };
	Course c{ "DON'T KNOW", "DON'T KNOW", {} , "Open",0, 0,0 };
	Student s1, s2;
	while (true)
	{
		system("cls");
		cout<< "======================== MAIN MENU ========================" << endl;
		cout << "1. DATE" << endl;
		cout << "2. STUDENT" << endl;
		cout << "3. COURSE" << endl;
		cout << "0. Exit" << endl;
		cout << "=========================== END ===========================" << endl;
		
		cout << "Plese enter type of struct: ";
		cin >> type;
		if (type == 1)
		{
			while (true)
			{
				system("cls");
				cout << "======================== MENU DATE ========================" << endl;
				cout << "1. Output a date with format" << endl;
				cout << "2. Increase a date by k day" << endl;
				cout << "3. Decrease a date by k day" << endl;
				cout << "4. Compute the distance between input date vs 1/1/same year" << endl;
				cout << "5. Compute the distance between input date vs 1/1/1970" << endl;
				cout << "6. Compute the distance between 2 input dates" << endl;
				cout << "7. Compute the date of week of the input date" << endl;
				cout << "0. Return to main menu" << endl;
				cout << "=========================== END ===========================" << endl;

				int choice;
				cout << "Moi thay nhap lua chon: ";
				cin >> choice;

				if (choice == 1)
				{
					fstream fi, fo;
					readFileDate(fi, "inputDate.txt", date);
					cout << "The date: ";
					output_Date(date);

					int format;
					cout << "\n1. yyyy - MM - dd" << endl;
					cout << "2. MMM - dd - yy" << endl;
					cout << "Enter format: ";
					cin >> format;

					if (format == 1)
					{
						cout << "\nFormat yyyy - MM - dd: ";
						outputDateWithFormat(date, "yyyy-MM-dd");
						writeFileDateFormat(fo, "outputDate.txt", date, "yyyy-MM-dd");
						cout << endl;
					}
					else if (format == 2)
					{
						cout << "Format MMM dd yy: ";
						outputDateWithFormat(date, "MMM dd yy");
						writeFileDateFormat(fo, "outputDate.txt", date, "MMM dd yy");
						cout << endl;
					}
					cout << "Open file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 2)
				{
					fstream fi;
					readFileDate(fi, "inputDate.txt", date);
					int k;
					output_Date(date);
					cout << endl;
					cout << "Enter k: ";
					cin >> k;
					output_Date(date);
					cout << " after increasing by " << k << " days is: ";
					increase_Date_by_k_days(date, k);
					output_Date(date);

					fstream fo;
					writeFileDate(fo, "outputDate.txt", date);
					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 3)
				{
					fstream fi;
					readFileDate(fi, "inputDate.txt", date);
					int k;
					cout << "The date: ";
					output_Date(date);
					cout << endl;
					cout << "Enter k: ";
					cin >> k;
					output_Date(date);
					cout << " after decreasing by " << k << " days is: ";
					decrease_Date_by_k_days(date, k);
					output_Date(date);
					fstream fo;
					writeFileDate(fo, "outputDate.txt", date);
					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 4)
				{
					fstream fi;
					readFileDate(fi, "inputDate.txt", date);
					cout << "Distance between ";
					output_Date(date);
					cout << " with " << date.year << "-1-1" << " = " << compute_distance_Date_1_1_SameYear(date) << endl;
					fstream fo;
					writeFileDistance(fo, "outputDate.txt", compute_distance_Date_1_1_SameYear(date));

					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 5)
				{
					fstream fi;
					readFileDate(fi, "inputDate.txt", date);
					cout << "\nDistance between ";
					output_Date(date);
					cout << " and 1970-1-1";
					cout << " = " << compute_distance_Date_1_1_1970(date);
					fstream fo;
					writeFileDistance(fo, "outputDate.txt", compute_distance_Date_1_1_1970(date));
					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 6)
				{
					fstream fi;
					readFile2Date(fi, "input2Date.txt", date1, date2);
					cout << "\nDistance between ";
					output_Date(date1);
					cout << " and ";
					output_Date(date2);
					cout << " = " << compute_distance_Date_Date(date1, date2);
					fstream fo;
					writeFileDistance(fo, "outputDate.txt", compute_distance_Date_Date(date1, date2));
					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n\n";
				}
				else if (choice == 7)
				{
					fstream fi;
					readFileDate(fi, "inputDate.txt", date);
					print_The_Date_of_week(date);

					fstream fo; 
					writeFielDateOfWeek(fo, "outputDate.txt", date);
					cout << "\nOpen file outputDate.txt" << endl;
					cout << "\n";
				}
				else if (choice == 0)
				{
					break;
				}
				system("pause");
			}
			system("pause");
		}
		else if (type == 2)
		{
			while (true)
			{
				system("cls");
				cout << "======================== MENU STUDENT ========================" << endl;
				cout << "1. Load a student from a text file and save a student to a text file" << endl;
				cout << "2. Output a student" << endl;
				cout << "3. Extract the class of input student" << endl;
				cout << "4. Compare 2 students by id" << endl;
				cout << "5. Compare 2 students by gpa, and then by id" << endl;
				cout << "6. Compare 2 students by name, and then by id" << endl;
				cout << "7. Compare 2 students by first name, and then by id" << endl;
				cout << "0. Return to main menu" << endl;
				cout << "============================ END ============================" << endl;

				int choice2;
				cout << "Moi thay nhap lua chon: ";
				cin >> choice2;

				if (choice2 == 1)
				{
					fstream fi;
					readFileStudent(fi, "inputStudent.txt", s);
					//output_Student(s);

					fstream fo;
					writeFileStudent(fo, "outputStudent.txt", s);

					cout << "\nOpen outputStudent.txt" << endl;

					cout << "\n\n";
				}
				else if(choice2 == 2) //HOI LAI NHA
				{
					fstream fi;
					readFileStudent(fi, "inputStudent.txt", s);
					output_Student(s);

					fstream fo;
					writeFileStudent(fo, "outputStudent.txt", s);

					cout << "\nOpen outputStudent.txt" << endl;
					cout << "\n";
				}
				else if(choice2 == 3)
				{
					fstream fi;
					readFileStudent(fi, "inputStudent.txt", s);
					cout << s.full_name << " ";
					extract_Class(s);

					fstream fo;
					writeFileClassOfStudent(fo, "outputStudent.txt", s);
					cout << "\nOpen outputStudent.txt" << endl;

					cout << "\n";
				}
				else if(choice2 == 4)
				{
					fstream fi;
					readFile2Student(fi, "input2Student.txt", s1, s2);
					fstream fo;

					if (compare_by_ID(s1, s2) == 1)
					{
						cout << s1.full_name << "'s ID is bigger than " << s2.full_name << "'s ID" << endl;
						writeFileStudent(fo, "outputStudent.txt", s1);
					}
					else if (compare_by_ID(s1, s2) == 2)
					{
						cout << s1.full_name << "'s ID is smaller than " << s2.full_name << "'s ID" << endl;
						writeFileStudent(fo, "outputStudent.txt", s2);
					}
					cout << "\nOpen outputStudent.txt" << endl;
				}
				else if (choice2 == 5)
				{
					fstream fi;
					readFile2Student(fi, "input2Student.txt", s1, s2);
					fstream fo;

					if (compare_by_GPA_ID(s1, s2) == 1)
					{
						cout << s1.full_name << " is bigger than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s1);
					}
					else if (compare_by_GPA_ID(s1, s2) == 2)
					{
						cout << s1.full_name << " is smaller than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s2);
					}
					cout << "\nOpen outputStudent.txt" << endl;
					cout << "\n";
				}
				else if (choice2 == 6)
				{
					fstream fi;
					readFile2Student(fi, "input2Student.txt", s1, s2);
					fstream fo;

					if (compare_by_NAME_ID(s1, s2) == 1)
					{
						cout << s1.full_name << " is bigger than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s1);
					}
					else if (compare_by_NAME_ID(s1, s2) == 2)
					{
						cout << s1.full_name << " is smaller than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s2);
					}
					cout << "\nOpen outputStudent.txt" << endl;
					cout << "\n";
				}
				else if (choice2 == 7) //COI LAI AH
				{
					fstream fi;
					readFile2Student(fi, "input2Student.txt", s1, s2);
					fstream fo;

					if (compare_by_FirstName_ID(s1, s2) == 1)
					{
						cout << s1.full_name << " is bigger than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s1);
					}
					else if (compare_by_FirstName_ID(s1, s2) == 2)
					{
						cout << s1.full_name << " is smaller than " << s2.full_name << endl;
						writeFileStudent(fo, "outputStudent.txt", s2);
					}
					cout << "\nOpen outputStudent.txt" << endl;
					cout << "\n";
				}
				else if(choice2 == 0)
				{
					break;
				}
				system("pause");
			}
		}
		else if (type == 3)
		{
			while (true)
			{
				system("cls");
				cout << "======================== MENU COURSE ========================" << endl;
				cout << "1. Load a course from text file" << endl;
				cout << "2. Save a course to text file" << endl;
				cout << "3. Sort students by id" << endl;
				cout << "4. Sort students by first name" << endl;
				cout << "5. Sort students by gpa" << endl;
				cout << "6. Sort students by dob" << endl;
				cout << "0. Return to main menu" << endl;
				cout << "============================ END ============================" << endl;

				int choice3;
				cout << "Moi thay nhap lua chon: ";
				cin >> choice3;

				if (choice3 == 1)
				{
					fstream fi; 
					readFileCourse(fi, "inputCourse.txt", c);
					output_Course(c);
				}
				else if (choice3 == 2)
				{
					fstream fi, fo;
					readFileCourse(fi, "inputCourse.txt", c);
					writeFileCourse(fo, "outputCourse.txt", c);

					cout << "Open file outputCourse.txt" << endl << endl;
				}
				else if (choice3 == 3)
				{
					fstream fi, fo;
					readFileCourse(fi, "inputCourse.txt", c);
					sortStudentByID(c);
					output_Course(c);
					writeFileCourse(fo, "outputCourse.txt", c);

					cout << "Open file outputCourse.txt" << endl << endl;
				}
				else if (choice3 == 4)
				{
					fstream fi, fo;
					readFileCourse(fi, "inputCourse.txt", c);
					sortStudentByFirstname(c);
					output_Course(c);
					writeFileCourse(fo, "outputCourse.txt", c);

					cout << "Open file outputCourse.txt" << endl << endl;
				}
				else if (choice3 == 5)
				{
					fstream fi, fo;
					readFileCourse(fi, "inputCourse.txt", c);
					sortStudentByGPA(c);
					output_Course(c);
					writeFileCourse(fo, "outputCourse.txt", c);

					cout << "Open file outputCourse.txt" << endl << endl;
				}
				else if (choice3 == 6)
				{
					fstream fi, fo;
					readFileCourse(fi, "inputCourse.txt", c);
					sortStudentByDOB(c);
					output_Course(c);
					writeFileCourse(fo, "outputCourse.txt", c);

					cout << "Open file outputCourse.txt" << endl << endl;
				}
				else if (choice3 == 0)
				{
					break;
				}
				system("pause");
			}
			system("pause");
		}
		else if (type == 0)
		{
			cout << "GOODBYE!" << endl;
			exit(0);
		}
	}
	return 0;
}