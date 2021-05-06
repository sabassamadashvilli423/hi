#include <iostream>
#include"Rectangle.h"
#include"Shape.h"
#include"Triangle.h"
using namespace std;
int main()
{
	Rectangle Rect;
	Triangle  Tri;

	Rect.setx(7);
	Rect.sety(2);

	cout <<  Rect.getPerimeter() << endl;

	Tri.setx(9);
	Tri.sety(3);
	Tri.setz(5);

	cout <<  Tri.getPerimeter() << endl;
}
// mas cpp filebshi agar damiweria agar girda