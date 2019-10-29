#include <iostream>
#include <string>
#include "min.h"
using namespace std;

int main() {
	int x;
	int y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "\nThe smallest integer is " << minimum(x, y) << endl;

	char c1;
	char c2;
	cout << "Enter two characters: ";
	cin >> c1 >> c2;
	cout << "\nThe smallest character is " << minimum(c1, c2) << endl;

	double n;
	double m;
	cout << "Enter two double values: ";
	cin >> n >> m;
	cout << "\nThe smallest double is " << minimum(n, m) << endl;

	string str1;
	string str2;
	cout << "Enter two words: ";
	cin >> str1 >> str2;
	cout << "\nThe smallest word is " << minimum(str1, str2) << endl;
	return 0;
}
