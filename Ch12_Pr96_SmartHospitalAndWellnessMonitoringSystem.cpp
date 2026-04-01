#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};

class Medical
{
public:
	string disease;
};

class Fitness
{
public:
	int steps;
};

class Patient : public Person
{
public:
	int id;
};

class InPatient : public Patient
{
public:
	int room;
};

class WellnessPatient : public InPatient, public Fitness
{
public:
	string diet;
};

class Doctor : public Person
{
public:
	string type;
};

class VisitingDoctor : public Doctor
{
	public:
		string hours;

};

class HealthAdvisor : public VisitingDoctor, public Medical
{
public:
	string advice;

};

int main()
{
	WellnessPatient wp;
	HealthAdvisor ha;

	cout << "Enter Patient Name: ";
	getline(cin, wp.name);
	cout << "Enter Age: ";
	cin >> wp.age;
	cout << "Enter ID: ";
	cin >> wp.id;
	cout << "Enter Room Number: ";
	cin >> wp.room;
	cout << "Enter Step Count: ";
	cin >> wp.steps;
	cin.ignore();
	cout << "Enter Diet Plan: ";
	getline(cin, wp.diet);
	
	cout << "\nEnter Doctor Name: ";
	getline(cin, ha.name);
	cout << "Enter Age: ";
	cin >> ha.age;
	cin.ignore();
	cout << "Enter Specialization: ";
	getline(cin, ha.type);
	cout << "Enter Visiting Hours: ";
	getline(cin, ha.hours);
	cout << "Enter Disease Focus: ";
	getline(cin, ha.disease);
	cout << "Enter Advice Note: ";
	getline(cin, ha.advice);

	cout << "\n\n-----Wellness Patient Details-----";
	cout << "\nName: " << wp.name;
	cout << "\nAge: " << wp.age;
	cout << "\nPatient ID: " << wp.id;
	cout << "\nRoom Number: " << wp.room;
	cout << "\nDaily Step Count: " << wp.steps;
	cout << "\nDiet Plan: " << wp.diet;

	if (wp.steps >= 7000) {
		cout << "\nActivity Status: Active";
	}
	else {
		cout << "\nActivity Status: Insufficient";
	}

	cout << "\n\n-----Health Advisor Details-----";
	cout << "\nName: " << ha.name;
	cout << "\nAge: " << ha.age;
	cout << "\nSpecialization: " << ha.type;
	cout << "\nVisiting Hours: " << ha.hours;
	cout << "\nDisease Focus: " << ha.disease;
	cout << "\nAdvice Note: " << ha.advice << endl;

	return 0;
}