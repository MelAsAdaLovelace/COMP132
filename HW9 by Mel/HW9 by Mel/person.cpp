#include <iostream>
#include <string>
using namespace std;

#include "person.h" 

Person::Person() {
	salary = 0;
	age = 21;
}

void Person::setName(string str) {
	name = str;
}
void Person::setSurname(string str) {
	surname = str;
}
void Person::setAge(int n) {
	if (n > 0) age = n;
	else age = 21;
}

void Person::setSalary(int n) {
	if (n > 0) salary = n;
	else n = 0;
}

string Person::getName() {
	return name;
}

string Person::getSurname() {
	return surname;
}

int Person::getAge() {
	return age;
}

int Person::getSalary() {
	return salary;
}

void Person::makeRaise() {
	setSalary(salary + (salary * 5 / 100));
}
void Person::printPerson() {
	cout << "--------  " << name << " " << surname << " ---------" << endl;
	cout << "Age: " << getAge() << ", Salary: $" << getSalary() << endl;
}