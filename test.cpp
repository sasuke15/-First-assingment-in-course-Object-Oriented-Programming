#include"collection.h"
/*
Student: Shay Bach
I.D: 204263842
*/
int main()
{
	Collection g(4, 3, 2, 0);
	cout << "-- before setColor(2) --" << endl;
	g.print();
	Point p(5, 1);
	g.getCircleAt(p).setColor(2);
	cout << "-- after setColor(2) --" << endl;
	g.print();
	return 0;
}