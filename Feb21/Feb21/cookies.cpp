#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "What kind of cookie would you like?  I can give you chocolate chip (c), peanut butter (p), oatmeal (o), or sugar (s)." << endl;
	cin >> input;
	switch (input) {
	case 'c':
		cout << "Here you go!  Have a chocolate chip cookie!" << endl;
		break;
	case 'p':
		cout << "You can take this peanut butter cookie." << endl;
		break;
	case 'o':
		cout << "This oatmeal cookie is for you." << endl;
		break;
	case 's':
		cout << "I can give you this sugar cookie." << endl;
		break;
	default:
		cout << "It's not a cookie, but take this cinnamon roll." << endl;
	}
}