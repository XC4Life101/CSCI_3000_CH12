#include <iostream>
#include <string>
using namespace std;

class Product
{
	public:
		string name;
		double price;
};

class DiscountProduct : public Product
{
	public:	
		double dis_prcnt;

};

int main()
{
	DiscountProduct obj;
	double discount;
	double final_price;

	cout << "Enter product name: ";
	getline(cin, obj.name);
	cout << "Enter price: ";
	cin >> obj.price;
	cout << "Enter discount percentage: ";
	cin >> obj.dis_prcnt;

	discount = obj.price * obj.dis_prcnt / 100.0;
	final_price = obj.price - discount;

	cout << "\nProduct Name: " << obj.name;
	cout << "\nOriginal Price: " << obj.price;
	cout << "\nDiscount Percentage: " << obj.dis_prcnt;
	cout << "\nFinal Price: " << final_price << endl;

	return 0;
}