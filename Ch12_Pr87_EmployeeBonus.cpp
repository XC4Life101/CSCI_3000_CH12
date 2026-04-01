#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		string name;
		float salary;
};

class Manager: public Employee
{
	public:
		double bonus;
};

int main()
{
	Manager obj;
	double total;

	cout << "Enter manager name: ";
	getline(cin, obj.name);
	cout << "Enter salary: ";
	cin >> obj.salary;
	cout << "Enter desired bonus: ";
	cin >> obj.bonus;

	total = obj.salary + obj.bonus;

	cout << "\nManager Name: " << obj.name;
	cout << "\nSalary: " << obj.salary;
	cout << "\nBonus: " << obj.bonus;
	cout << "\nTotal Income: " << total << endl;

	return 0;
}