#include "Shape.h"
#include<iostream>
using namespace std;
void virtualViaPointer(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout << "Area is " << baseptr->calculateArea() << \
		" and volume is " << baseptr->calculateVolume() << "\n";
}