#include <iostream>
using namespace std;

int main() {
	int song = 0;
	cout << "What song would you like to play?" << endl;
	cout << "You have a choice between things like 'Twinkle Twinkle Little Star' (1), 'Mary had a Little Lamb' (2)," << endl;
	cout << "or 'Jack and Jill' (3).  Don't judge me, I was told to pick nursery rhymes since today's crude songs " << endl;
	cout << "just don't suit me and the stuff I listen to is purely instrumental." << endl;
	cin >> song;
	switch (song) {
	case 1: cout << "Twinkle twinkle little star," << endl;
		cout << "How I wonder what you are." << endl << endl;
		cout << "Truly one of Mozart's finest early works." << endl;
			break;
	case 2:cout << "Mary had a little lamb, little lamb, little lamb," << endl;
		cout << "Mary had a little lamb whose fleece was white as snow." << endl << endl;
		cout << "A simple song that I'm sure everyone can remember." << endl;
		break;
	case 3: cout << "Jack and Jill went up the hill to fetch a pail of water." << endl;
		cout << "Jack fell down and broke his crown and Jill came tumbling after." << endl;
		cout << "A truly exquisite lesson in safety and the consequences of being unsafe." << endl;
	}
	cout << "" << endl << endl << endl;
	cout << "Thank you for using my jukebox.  I'm sorry the selection is... unimpressive." << endl;
}