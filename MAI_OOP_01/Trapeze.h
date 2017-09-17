#ifndef TRAPEZE_H
#define	TRAPEZE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Trapeze : public Figure {
public:
	Trapeze();
	Trapeze(std::istream &is);
	Trapeze(size_t i, size_t j, size_t k);

	double SquareF() override;
	void   Print() override;

	virtual ~Trapeze();
private:
	size_t side_a;
	size_t side_b;
	size_t height;
};

#endif	/* TRAPEZE_H */