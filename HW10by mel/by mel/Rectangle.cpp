#include <iostream>

using namespace std;

#include "rectangle.h"
#include "Square.h"

Rectangle::Rectangle(int w, int h) {
	width = (w >= 1) ? w : 1;
	height = (h >= 1) ? h : 1;
}

void Rectangle::shapeCopy(Square &mel)
{
	width = mel.side;
	height = mel.side;
}


