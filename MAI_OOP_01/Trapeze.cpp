#include "Trapeze.h"
#include "ErrorCin.h"
#include <iostream>
#include <cmath>

Trapeze::Trapeze() : Trapeze(0, 0, 0) {
}

Trapeze::Trapeze(size_t i, size_t j, size_t k) : side_a(i), side_b(j), height(k) {
	std::cout << "Trapeze created: " << side_a << ", " << side_b << ", " << height << std::endl;
}

Trapeze::Trapeze(std::istream &is) { 
	ErrorCin *ePtr = new ErrorCin;
	std::cout << "Side a and side b - two parallel sides." << std::endl;
	std::cout << "Side a=";
	is >> side_a;
	error=ePtr->IsErrorCin(is);
	std::cout << "Side b=";
	is >> side_b;
	error=ePtr->IsErrorCin(is);
	std::cout << "Height=";
	is >> height;
	error=ePtr->IsErrorCin(is);
	delete(ePtr);
}

double Trapeze::SquareF() {

	return height*(side_a+side_b)*0.5;

}

void Trapeze::Print() {
	std::cout << "a=" << side_a << ", b=" << side_b << ", height=" << height << std::endl;

}

Trapeze::~Trapeze() {
	std::cout << "Trapeze deleted" << std::endl;
}