#ifndef FIGURE_H
#define	FIGURE_H

class Figure {
public:
	bool error = true;
	virtual double SquareF() = 0;
	virtual void   Print() = 0;
	virtual ~Figure() {};
};

#endif	/* FIGURE_H */