#ifndef SQUARE_H
#define	SQUARE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Square : public Figure {
public:
	Square();
	Square(std::istream &is);
	Square(long int i);

	double SquareF() override;
	void   Print() override;

	virtual ~Square();
private:
	long int side_a;
};

#endif	/* SQUARE_H */
