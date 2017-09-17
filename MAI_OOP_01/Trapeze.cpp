#include "Trapeze.h"
#include <iostream>
#include <cmath>

Trapeze::Trapeze() : Trapeze(0, 0, 0) {
}

Trapeze::Trapeze(size_t i, size_t j, size_t k) : side_a(i), side_b(j), height(k) {
	std::cout << "Trapeze created: " << side_a << ", " << side_b << ", " << height << std::endl;
}

Trapeze::Trapeze(std::istream &is) { 
	is >> side_a;
	is >> side_b;
	is >> height;
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