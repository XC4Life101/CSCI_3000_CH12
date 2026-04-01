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

class Graduate : public Student
{
	public:
		string degree;

};

int main()
{
	Graduate obj;

	cout << "Enter name: ";
	getline(cin, obj.name);
	cout << "Enter roll number: ";
	cin >> obj.roll_num;
	cin.ignore();
	cout << "Enter degree: ";
	getline(cin, obj.degree);

	cout << "\nName: " << obj.name;
	cout << "\nRoll Number: " << obj.roll_num;
	cout << "\nDegree: " << obj.degree << endl;

	return 0;
}