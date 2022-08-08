// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
#include <iostream>

int main()
{
    Point p1(2, 4);
    p1.drawShape();
    p1.print();
    cout << "Area is " << p1.calculateArea() << " and volume is " << p1.calculateVolume() << endl;
    Circle c1(2,4,5);
    c1.drawShape();
    c1.print();
    cout << "Area is " << c1.calculateArea() << " and volume is " << c1.calculateVolume() << endl;
    Shape* shape[2] = { &p1, &c1 };
    for (int i = 0; i < 2; ++i) {
        virtualViaPointer(shape[i]);
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
