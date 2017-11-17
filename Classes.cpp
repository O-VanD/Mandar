/*
 * loops.cpp
 *
 *  Created on: Nov 9, 2017
 *      Author: Mandar
 */

#include <iostream>

using namespace std;

class Box {
public:
	double length; // Length of a box
	double width;
	double height;
};

int constant() {
	Box Box1;
	Box Box2;
	double volume = 0.0;

	//box one specifications
	Box1.length = 9.0;
	Box1.width = 4.0;
	Box1.height = 6.0;

	//box 2 specifications
	Box2.height = 7.0;
	Box2.width = 5.0;
	Box2.length = 2.0;

	//box 1 SA
	volume = 2*Box1.height * 2*Box1.length * 2*Box1.width;
	cout << "Surface Area of Box 1 is " << volume << endl;

	//Box 2 SA
	volume = 2 * Box2.height * 2 * Box2.length * 2 * Box2.width;
	cout << "Surface Area of Box 2 is " << volume << endl;

	return 0;
}
# Mandar
# Mandar
