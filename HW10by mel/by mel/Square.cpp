#include <iostream>

using namespace std;

#include "rectangle.h"
#include "Square.h"

Square::Square(int s) {
	side = (s >= 1) ? s : 1;
}
