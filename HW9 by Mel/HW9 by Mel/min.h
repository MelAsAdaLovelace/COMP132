#include <iostream>
#include <string>
template <class mel>
mel minimum(mel x, mel y) {
	mel min = x;
	if (x > y) {
		min = y;
	}
	return min;
}