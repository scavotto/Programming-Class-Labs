#include "Rectangle.h"

#include <iostream>

using namespace std;

void Rectangle::setLength(double len) {
	length = len;
}
void Rectangle::setWidth(double wid) {
	width = wid;
}
double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::calculateArea() {
	double area;
	area = length * width;
	return area;
}
double Rectangle::calculatePerimeter() {
	double perimeter;
	perimeter = 2 * (length + width);
	return perimeter;
}

