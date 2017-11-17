/*
 * Inheritance.cpp
 *
 *  Created on: Nov 9, 2017
 *      Author: programmer
 */

#include <iostream>

using namespace std;

//Base class
class Shape {
	public:
	void setwidth(int w){
		width = w;
	}
	void setheight(int h){
		height = h;
	}
	void setPi(int p) {
		Pi = p;
	}
protected:
	int width;
	int height;
	int Pi;
};

//Derived Class
class Rectangle: public Shape {
	public:
	int getArea() {
		return (Pi * height ^2);
	}
};

int main(void) {
	Rectangle Rect;

	Rect. setheight(17);
	Rect. setPi(3.1415926535897932382649);

	//Print the area of the object
	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}
