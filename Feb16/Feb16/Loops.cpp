#include <iostream>
using namespace std;
int main() {
	int output = 0;
	int output2 = 0;
	int output3 = 0;
	cout << "loop 1" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}
	cout << "loop 2" << endl;
	for (int i = 0; i < 10; i = i + 2) {
		cout << i << endl;
	}
	cout << "loop 3 " << endl;
	for (int i = 10; i < 30; i = i + 10) {
		cout << i << endl;
	}

}