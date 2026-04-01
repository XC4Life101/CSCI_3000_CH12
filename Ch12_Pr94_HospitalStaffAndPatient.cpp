#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string name;
		int age;
};

class Doctor : public Person
{
public:
	string type;
};

class Patient : public Person
{
public:
	string disease;
};

int main()
{
	Doctor obj1;
	Patient obj2;

	cout << "Enter Doctor Name: ";
	getline(cin, obj1.name);
	cout << "Enter Age: ";
	cin >> obj1.age;
	cin.ignore();
	cout << "Enter Specialization: ";
	getline(cin, obj1.type);


	cout << "\nEnter Patient Name: ";
	getline(cin, obj2.name);
	cout << "Enter Age: ";
	cin >> obj2.age;
	cin.ignore();
	cout << "Enter Disease: ";
	getline(cin, obj2.disease);

	cout << "\nDoctor Name: " << obj1.name;
	cout << "\nAge: " << obj1.age;
	cout << "\nSpecialization: " << obj1.type;

	cout << "\n\nPatient Name: " << obj2.name;
	cout << "\nAge: " << obj2.age;
	cout << "\nDisease: " << obj2.disease << endl;

	return 0;
}