#ifndef TRAPEZE_H
#define	TRAPEZE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Trapeze : public Figure {
public:
	Trapeze();
	Trapeze(std::istream &is);
	Trapeze(long int i, long int j, long int k);

	double SquareF() override;
	void   Print() override;

	virtual ~Trapeze();
private:
	long int side_a;
	long int side_b;
	long int height;
};

#endif	/* TRAPEZE_H */