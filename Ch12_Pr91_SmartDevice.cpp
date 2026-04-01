#include <iostream>
#include <string>
using namespace std;

class Camera
{
	public:
		int pixels;

};

class MusicPlayer
{
	public:
		int volume;
};

class SmartPhone : public Camera, public MusicPlayer
{
	public: 
		string brand
};

int main()
{
	SmartPhone obj;

	cout << "Enter Brand: ";
	getline(cin, obj.brand);
	cout << "Enter number of megapixels: ";
	cin >> obj.pixels;
	cout << "Enter the power of speaker: ";
	cin >> obj.volume;

	cout << "\nBrand: " << obj.brand;
	cout << "\nCamera: " << obj.pixels;
	cout << "\nSpeaker Power " << obj.volume;

	return 0;
}