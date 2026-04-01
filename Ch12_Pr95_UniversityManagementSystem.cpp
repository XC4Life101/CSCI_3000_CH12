#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string name;
		int age;
};

class Academic
{
public:
	string major;
};

class Sports
{
public:
	string sport;
};

class Student : public Person
{
	public:
		int roll_num;
};

class Graduate : public Student
{
	public:
		string degree;
};

class StudentLeader : public Sports, public Graduate, public Academic
{
public:
	string role;
};

class Teacher : public Person, public Academic
{
public:
	string subject;
};

int main()
{
	StudentLeader stu;
	Teacher tea;

	cout << "Enter Student Name: ";
	getline(cin, stu.name);
	cout << "Enter Age: ";
	cin >> stu.age;
	cin.ignore();
	cout << "Enter Major: ";
	getline(cin, stu.major);
	cout << "Enter Roll Number: ";
	cin >> stu.roll_num;
	cin.ignore();
	cout << "Enter Degree: ";
	getline(cin, stu.degree);
	cout << "Enter Sport: ";
	getline(cin, stu.sport);
	cout << "Enter Leadership Role: ";
	getline(cin, stu.role);

	cout << "\nEnter Teacher Name: ";
	getline(cin, tea.name);
	cout << "Enter Age: ";
	cin >> tea.age;
	cin.ignore();
	cout << "Enter Department: ";
	getline(cin, tea.major);
	cout << "Enter subject: ";
	getline(cin, tea.subject);

	cout << "\n\n-----Student Leader Details-----";
	cout << "\nName: " << stu.name;
	cout << "\nAge: " << stu.age;
	cout << "\nMajor: " << stu.major;
	cout << "\nRoll Number: " << stu.roll_num;
	cout << "\nDegree: " << stu.degree;
	cout << "\nSport: " << stu.sport;
	cout << "\nLeadership Role: " << stu.role;

	cout << "\n\n-----Teacher Details-----";
	cout << "\nName: " << tea.name;
	cout << "\nAge: " << tea.age;
	cout << "\nDepartment: " << tea.major;
	cout << "\nSubject: " << tea.subject << endl;

	return 0;
}