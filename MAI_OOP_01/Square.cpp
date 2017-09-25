#include "Square.h"
#include"ErrorCin.h"
#include <iostream>
#include <cmath>

Square::Square() : Square(0) {
}

Square::Square(long int i) : side_a(i) {
	std::cout << "Square created: " << side_a << std::endl;
}

Square::Square(std::istream &is) {
	ErrorCin *ePtr = new ErrorCin;
	std::cout << "Side=";
	is >> side_a;
	error=ePtr->IsErrorCin(is);
	if (side_a < 0)
	{
		error = true;
	}
	delete(ePtr);
}

double Square::SquareF() {

	return side_a*side_a;
}

void Square::Print() {
	std::cout << "a=" << side_a << std::endl;

}

Square::~Square() {
	std::cout << "Square deleted" << std::endl;
}