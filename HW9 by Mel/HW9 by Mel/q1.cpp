#include <iostream>

using namespace std;

int tripleByValue(int x) {
	return 3 * x;
}

void tripleByReference(int &x) {
	x =  3 * x;
}

int main() {
	int count;
	int &c = count;
	cout << "Enter a value for count: ";
	cin >> count;
	cout << "Value of count before call tripleByValue is " << count << endl;
	cout << "Value of count after call tripleByValue is " << tripleByValue(count) << endl;
	tripleByValue(count);
	cout << "Value of count in main after call tripleByValue is " << count << endl;
	cout << "\nValue of count before call tripleByReference is " << c << endl;
	tripleByReference(c);
	cout << "\nValue of count in main after call tripleByReference is " << c << endl;
	return 0;
}