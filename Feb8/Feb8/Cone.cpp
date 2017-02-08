#include <iostream>
using namespace std;
int main() {
	int radius = 0;
	int height = 0;
	double volume = 0;
	cout << "What is the radius of a cone?" << endl;
	cin >> radius;
	cout << "What is the height of the cone?" << endl;
	cin >> height;
	volume = 3.14*radius*radius*height / 3;
	cout << "The cone's volume is approximately " << volume << "." << endl;
}