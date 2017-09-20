#ifndef ERRORCIN_H
#define	ERRORCIN_H
#include <iostream>

class ErrorCin {
public:
	bool error = false;
	bool IsErrorCin(std::istream &is) {
		if (is.fail()) {
			error = true;
			is.clear();
			is.ignore(is.rdbuf()->in_avail());
			std::cout << "Error.Number is needed." << std::endl;
			//is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //-works
		}
		return error;
	}
	virtual ~ErrorCin() {};
};

#endif	
