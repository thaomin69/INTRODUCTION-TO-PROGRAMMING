#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

int checkLeapYear(int x);
int check_Input(int& x);
void input_Date(Date& x);
void output_Date(Date& x);
void outputDateWithFormat(Date x, const char format[]);
int compare_2_Date(Date a, Date b);
Date find_Tomorrow(Date x);
Date find_Yesterday(Date x);
Date increase_Date_by_k_days(Date& x, int k);
Date decrease_Date_by_k_days(Date& x, int k);
int compute_distance_Date_1_1_SameYear(Date x);
int compute_distance_Date_1_1_1970(Date x);
int compute_distance_Date_Date(Date x, Date y);
int compute_The_Date_of_Week(Date x);
void print_The_Date_of_week(Date x);

int numberOfDay_InMonth(int m, int y);
int compute_distance_Date_1_1_1(Date a);

Date createDate(const int& d, const int& m, const int& y);
void readFileDate(fstream& inDev, const char FileName[], Date& date);
void readFile2Date(fstream& inDev, const char FileName[], Date& date1, Date& date2);
void writeFileDate(fstream& outDev, const char FileName[], Date& date);
void writeFileDateFormat(fstream& outDev, const char FileName[], Date& date, const char format[]);
void writeFileDistance(fstream& outDev, const char FileName[], int n);
void writeFielDateOfWeek(fstream& outDev, const char FileName[], Date& d);

//--------------------------------------------------------------------

struct Student
{
	int id;
	char full_name[100];
	float gpa;
	char address[100];
	Date dob;
};

void input_Student(Student& s);
void output_Student(Student s);
void output_Student2(Student s);
void extract_Class(Student s);
int compare_by_ID(Student a, Student b);
int compare_by_GPA_ID(Student a, Student b);
int compare_by_FirstName_ID(Student a, Student b);
int compare_by_LastName_ID(Student a, Student b);
int compare_by_NAME_ID(Student a, Student b);
int compare_by_DOB_ID(Student a, Student b);

void readFileStudent(fstream& inDev, const char FileName[], Student& s);
void readFile2Student(fstream& inDev, const char FileName[], Student& s1, Student& s2);
void writeFileStudent(fstream& outDev, const char FileName[], Student& s);
void writeFileClassOfStudent(fstream& outDev, const char FileName[], Student& s);
//--------------------------------------------------------------------

struct Course
{
	char course_id[50];
	char course_name[100];
	Student array_Student[100];
	char status[10];
	int max_Students;
	int min_Students;
	int size;
};

void readFileCourse(fstream& inDev, const char FileName[], Course& c);
void writeFileCourse(fstream& outDev, const char FileName[], Course c);
void output_Course(Course c);
void sortStudentByID(Course& c);
void sortStudentByFirstname(Course& c);
void sortStudentByGPA(Course& c);
void sortStudentByDOB(Course& c);

void swap(Course& a, Course& b);
int compareByFirstName(Student a, Student b);
int compareByGPA(Student a, Student b);