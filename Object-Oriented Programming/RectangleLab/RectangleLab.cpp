#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {

	int recLen;
	int recWid;

	Rectangle rec;
	for (int i = 0; i < 10; i++) {
		cout << "Please enter the rectangle's length:" << endl;
		cin >> recLen;

		cout << "Please enter the rectangle's width:" << endl;
		cin >> recWid;

		rec.setLength(recLen);
		rec.setWidth(recWid);

		cout << "Area: " << rec.calculateArea() << endl;
		cout << "Perimeter: " << rec.calculatePerimeter() << endl;
	}
	return 0;
}