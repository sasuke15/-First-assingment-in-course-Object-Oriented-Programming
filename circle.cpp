#include"circle.h"


Circle::Circle(int x, int y, int r, int color) : center(x, y)
{

	this->color = color;
	radius = r;

}

int Circle::getColor() const
{

	return  color;

}

void Circle::setColor(int color)
{ 

	this->color = color;

}

bool Circle::contains(const Point &p) const
{

	if (radius * radius >= (p.getX() - center.getX()) * (p.getX() - center.getX()) + (p.getY() - center.getY()) * (p.getY() - center.getY()))
		return true;

	else
		return false;

}

void Circle::print() const
{

	center.print();
	cout << " radius=" << radius << " color=" << color << endl;

}