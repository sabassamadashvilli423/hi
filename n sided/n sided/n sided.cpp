#include <iostream>
#include "Cube.h"
#include"nSided.h"
#include "Triangle.h"
using namespace std;
int main()
{
	int n,g;
	cin >> n;
	cin >> g;
	nSided* p;
	Cube t(n, g);
	t.perimeter();
	p = &t;
	p->perimeter();
	Triangle r(n, g);
	r.perimeter();
}