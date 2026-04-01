#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string name;
};

class Member : public Person
{
	public:
		int id;

};

class PremiumMember : public Member
{
	public:
		int borrows;

};

int main()
{
	PremiumMember obj;

	cout << "Enter name: ";
	getline(cin, obj.name);
	cout << "Enter ID: ";
	cin >> obj.id;
	cout << "Enter number of books borrowed: ";
	cin >> obj.borrows;

	cout << "\nMember Name: " << obj.name;
	cout << "\nMember ID: " << obj.id;
	cout << "\nBooks Borrowed: " << obj.borrows;

	if (obj.borrows > 10) {
		cout << "\nStatus: Limit Exceeded\n";
	}
	else {
		cout << "\nStatus: Within Limit\n";
	}

	return 0;
}