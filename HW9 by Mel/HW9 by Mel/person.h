#include <string>
#ifndef PERSON_H
#define PERSON_H

using namespace std;
class Person{
public:
	Person();
	string getName();
	string getSurname();
	int getAge();
	int getSalary();

	void setName(string);
	void setSurname(string);
	void setAge(int);
	void setSalary(int);
	void makeRaise();
	void printPerson();

private:

	string name;
	string surname;
	int age;
	int salary;
	
};

#endif // !PERSON_H
