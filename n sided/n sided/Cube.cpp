#include "Cube.h"
#include"nSided.h"
Cube::Cube() {

}
Cube::Cube(int sides, int length) {
	this->sides = 4;
	this->length = length;
}
int Cube::perimeter() {
	return sides * length;
}