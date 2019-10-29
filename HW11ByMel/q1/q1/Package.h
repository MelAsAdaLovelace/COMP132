#ifndef  PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <string>
using namespace std;

class Package {
public:
	Package(const string &, const string &, const string &, const string &, int , const string &, const string &, const string &, const string &,
		 int , double, double);
	void setSenderName(const string &);
	void setSenderAddress(const string &);
	void setSenderCity(const string &);
	void setSenderState(const string &);
	void setSenderZIP(int);

	void setRecipientName(const string &);
	void setRecipientAddress(const string &);
	void setRecipientCity(const string &);
	void setRecipientState(const string &);
	void setRecipientZIP(int);

	string getSenderName() const;
	string getSenderAdress() const;
	string getSenderCity() const;
	string getSenderState() const;
	int getSenderZIP() const;

	string getRecipientName() const;
	string getRecipientAdress() const;
	string getRecipientCity() const;
	string getRecipientState() const;
	int getRecipientZIP() const;

	void setWeight(double);
	double getWeight() const;

	void setCostPerOunce(double);
	double getCostPerOunce() const;

	double calculateCost() const;

private:
	string senderName;
	string senderAdress;
	string senderCity;
	string senderState;
	int senderZIP;

	string recipientName;
	string recipientAdress;
	string recipientCity;
	string recipientState;
	int recipientZIP;

	double weight;
	double costPerOunce;

};

#endif // ! PACKAGE_H
