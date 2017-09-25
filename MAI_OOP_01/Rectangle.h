#ifndef RECTANGLE_H
#define	RECTANGLE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Rectangle : public Figure {
public:
	Rectangle();
	Rectangle(std::istream &is);
	Rectangle(long int i, long int j);

	double SquareF() override;
	void   Print() override;

	virtual ~Rectangle();
private:
	long int side_a;
	long int side_b;
};

#endif	/* RECTANGLE_H */