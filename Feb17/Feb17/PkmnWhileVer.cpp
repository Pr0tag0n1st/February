#include <iostream>
using namespace std;
int main() {
	char input = 'y';
	while (input == 'y') {
		cout << "Would you like a cookie?" << endl;
		cin >> input;
		if (input == 'y')
			cout << "Okay then." << endl;
		else
			break;
	}
	cout << "Well, I don't have one anyway." << endl;
}