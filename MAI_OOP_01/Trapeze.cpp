#include "Trapeze.h"
#include "ErrorCin.h"
#include <iostream>
#include <cmath>

Trapeze::Trapeze() : Trapeze(0, 0, 0) {
}

Trapeze::Trapeze(long int i, long int j, long int k) : side_a(i), side_b(j), height(k) {
	std::cout << "Trapeze created: " << side_a << ", " << side_b << ", " << height << std::endl;
}

Trapeze::Trapeze(std::istream &is) { 
	bool errort = false;
	ErrorCin *ePtr = new ErrorCin;
	std::cout << "Side a and side b - two parallel sides." << std::endl;
	std::cout << "Side a=";
	is >> side_a;
	if (side_a < 0)
	{
		errort = true;
	}
	error=(ePtr->IsErrorCin(is))||errort;
	std::cout << "Side b=";
	is >> side_b;
	if (side_b < 0)
	{
		errort = true;
	}
	error = (ePtr->IsErrorCin(is)) || errort;
	std::cout << "Height=";
	is >> height;
	if (height < 0)
	{
		errort = true;
	}
	error = (ePtr->IsErrorCin(is)) || errort;
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