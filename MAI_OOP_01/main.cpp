#include <cstdlib>
#include <string>
#include "Trapeze.h"
#include "Rectangle.h"
#include "Square.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	long int op;
	std::cin >> op;
	std::cout << op<<std::endl;
	std::string name;
	std::cout << "������� �������� ������" << std::endl;
	std::getline(std::cin, name);
		if (name == "Trapeze"){
		//
	} else
		if (name == "Rectangle" || name == "�������������") {
		//	
	} else
		if (name == "Square") {
		//
		}
		else
			std::cout << "������.�������� ������ �����.";

	Figure *ptr = new Rectangle(std::cin);
	ptr->Print();
	std::cout << ptr->SquareF() << std::endl;
	delete ptr;
	system("pause");
	return 0;
}