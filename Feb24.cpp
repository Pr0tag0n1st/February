#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	double num = 1;
	for (int i = 0; i < 11; i++) {
		num = num * 10;
		cout <<fixed << setprecision(0) << num << endl;
	}
}
