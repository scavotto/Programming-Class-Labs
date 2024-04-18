#pragma once
class Rectangle
{
	public:	
		//methods
		void setLength(double len);
		void setWidth(double wid);
		double getLength();
		double getWidth();
		double calculateArea();
		double calculatePerimeter();

	//attributes
	private:
		double length;
		double width;
		double area;
		double perimeter;
};

