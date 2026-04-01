#include <iostream>
#include <string>
using namespace std;

class Marks
{
public:
	int score;

};

class Attendance
{
public:
	int att_prcnt;
};

class Student : public Attendance, public Marks
{
public:
	string name
};

int main()
{
	Student obj;

	cout << "Enter Name: ";
	getline(cin, obj.name);
	cout << "Enter Marks: ";
	cin >> obj.score;
	cout << "Enter Attendance percentage: ";
	cin >> obj.att_prcnt;

	cout << "\nStudent Name: " << obj.name;
	cout << "\nMarks: " << obj.score;
	cout << "\nAttendance: " << obj.att_prcnt;

	if (obj.att_prcnt >= 75) {
		cout << "Eligible for Exam: Yes" << endl;
	}
	else {
		cout << "Eligible for Exam: No" << endl;
	}

	return 0;
}