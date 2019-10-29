#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Square.h"

using namespace std;

class Rectangle {
	friend int displayAreaR(Rectangle &);
public :
	Rectangle(int = 1, int = 1);
	void shapeCopy(Square &);
private:
	int height;
	int width;
};



#endif // !RECTANGLE_H;