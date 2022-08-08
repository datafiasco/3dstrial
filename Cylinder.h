#pragma once
#include "Circle.h"
class Cylinder :public Circle {
	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double = 0, double = 0, int = 0, int = 0);
	void setHeight(double r);
	double getHeight() const;
	double calculateArea() const;
	double calculateVolume() const;
protected:
	double height;
};