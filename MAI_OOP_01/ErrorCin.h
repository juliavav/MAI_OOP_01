#ifndef ERRORCIN_H
#define	ERRORCIN_H
#include <iostream>

class ErrorCin {
public:
	bool error = false;
	bool IsErrorCin(std::istream &is) {
		if (is.fail()) { //устонавливает бит fail если is отличен от чисел
			error = true;
			is.clear();//очищает бит fail
			is.ignore(is.rdbuf()->in_avail());//очищение потока cin
			std::cout << "Error.Number is needed." << std::endl;
			//is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //-works
		}
		return error;
	}
	virtual ~ErrorCin() {};
};

#endif	
