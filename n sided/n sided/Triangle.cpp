#include "Triangle.h"
#include"nSided.h"
Triangle::Triangle() {

}
Triangle::Triangle(int sides, int length) {
	this->sides = 3;
	this->length = length;
}
int Triangle::perimeter() {
	return sides * length;
}

