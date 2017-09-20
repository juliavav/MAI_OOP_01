#include <cstdlib>
#include <string>
#include "Trapeze.h"
#include "Rectangle.h"
#include "Square.h"

void PrintAndSquare(Figure*);

int main(int argc, char** argv) {
	//setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "Hi!" << std::endl;
	while (name != "Exit")
	{
		std::cout << "Which figure would you like to try?Enter \"Trapezoid/Rectangle/Square\" or \"Exit\" for escape. " << std::endl;
		std::cin>>name;
		if (name == "Trapezoid" || name == "1") {
			Figure *ptr = new Trapeze(std::cin);
			PrintAndSquare(ptr);
		}
		else
			if (name == "Rectangle" || name == "2") {
				Figure *ptr = new Rectangle(std::cin);
				PrintAndSquare(ptr);
			}
			else
				if (name == "Square" || name == "3") {
					Figure *ptr = new Square(std::cin);
					PrintAndSquare(ptr);
				}
				else
					if(name!="Exit")
					std::cout << "Error. I don't know such figure."<<std::endl;
	}
	system("pause");
	return 0;
}

void PrintAndSquare(Figure *ptr) {
	ptr->Print();
	std::cout << ptr->SquareF() << std::endl;
	delete ptr;
}