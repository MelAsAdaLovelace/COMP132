#include <iostream>
#include "rectangle.h"
#include "Square.h"

using namespace std;

int main() {
	Square *mels = new Square(25);
	Rectangle *melr = new Rectangle(50, 30);
	cout << "Area of the square: " << displayArea(*mels) << endl;
	cout << "Area of the rectangle: " << displayAreaR(*melr) << endl;
	melr->shapeCopy(*mels);
	cout << "Area of the rectangle: " << displayAreaR(*melr) << endl;
	delete[] mels;
	delete[] melr;

	system("PAUSE");
	return 0;
}

int displayAreaR(Rectangle &mel) {
	return mel.height*mel.width;
}
int displayArea(Square &mel) {
	return mel.side*mel.side;
}
 