#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string name;

};

class Student : public Person
{
	public:
		int roll_num;
};

class Teacher : public Person
{
	public:
		string subject;
};

int main()
{
	Student obj1;
	Teacher obj2;

	cout << "Enter Student Name: ";
	getline(cin, obj1.name);
	cout << "Enter Student Roll Number: ";
	cin >> obj1.roll_num;
	cin.ignore();
	cout << "Enter Teacher Name: ";
	getline(cin, obj2.name);
	cout << "Enter Teacher Subject: ";
	getline(cin, obj2.subject);

	cout << "\nStudent Name: " << obj1.name;
	cout << "\nRoll Number: " << obj1.roll_num;
	cout << "\nTeacher Name: " << obj2.name;
	cout << "\nSubject: " << obj2.subject;

	return 0;
}