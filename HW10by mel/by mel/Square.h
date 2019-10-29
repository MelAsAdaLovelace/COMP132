#ifndef SUQARE_H
#define SUQARE_H

#include <iostream>

using namespace std;
class Square {
	friend int displayArea(Square &);
	friend class Rectangle;
public:
	Square(int = 1);

private:
	int side;
};




#endif // !RECTANGLE_H;