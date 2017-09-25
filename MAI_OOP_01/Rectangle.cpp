#include "Rectangle.h"
#include "ErrorCin.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle() : Rectangle(0, 0) {
}

Rectangle::Rectangle(long int i, long int j) : side_a(i), side_b(j) {
	std::cout << "Rectangle created: " << side_a << ", " << side_b << std::endl;
}

Rectangle::Rectangle(std::istream &is) {
	ErrorCin *ePtr = new ErrorCin;
	bool errort = false;
	std::cout << "Side a=";
	is >> side_a;
	if (side_a < 0)
	{
		errort = true;
	}
	error = (ePtr->IsErrorCin(is))||errort;
	std::cout << "Side b=";
	is >> side_b;
	if (side_b < 0)
	{
		errort = true;
	}
	error = (ePtr->IsErrorCin(is)) || errort;
	delete ePtr;
}

double Rectangle::SquareF() {

	return side_a*side_b;

}

void Rectangle::Print() {
	std::cout << "a=" << side_a << ", b=" << side_b << std::endl;

}

Rectangle::~Rectangle() {
	std::cout << "Rectangle deleted" << std::endl;
}