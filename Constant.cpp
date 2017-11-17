#include <iostream>

using namespace std;

#define LENGTH 3
#define WIDTH 5
#define DEPTH 8
#define NEWLINE '\n'

int square() {
	int SA;
	SA = 2*(LENGTH * WIDTH) + 2*(LENGTH * DEPTH) + 2*(DEPTH * WIDTH);
	cout << SA;
	cout << "m^2" << endl;
	cout << NEWLINE;
	return 0;
}
