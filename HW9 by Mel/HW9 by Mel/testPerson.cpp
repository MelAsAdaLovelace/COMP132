#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main() {
	Person mel1;
	mel1.setName("Melike");
	mel1.setSurname("Kavcioglu");
	mel1.setAge(22);
	mel1.setSalary(100);
	cout << "Person's information: " << endl;
	mel1.printPerson();

	mel1.makeRaise();
	mel1.setAge(-6);
	mel1.setName("Melo");
	mel1.printPerson();
	return 0;
}
