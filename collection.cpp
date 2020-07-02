#include"collection.h"
Collection::Collection(int radius, int width, int height, int color)
{

	int i = 0, j = 0;

	circles = new  Circle  *[height * width];

	for (count = 0; height * width > count; count++, i++)
	{

		circles[count] = new Circle(i * radius * 2, j * radius * 2, radius, color);

		if (i == width - 1)
		{
			i = -1;
			j++;
		}

	}

}

Collection::~Collection()
{

	for (int i = 0; count > i; i++)
		delete[] circles[i];

	delete[] circles;

}

Circle& Collection::getCircleAt(const Point &p)
{

	for (int i = 0; count > i; i++)
		if ((circles[i]->contains(p)) == true)
			return *circles[i];

}

void Collection::print() const
{

	for (int i = 0; count > i; i++)
		circles[i]->print();

}