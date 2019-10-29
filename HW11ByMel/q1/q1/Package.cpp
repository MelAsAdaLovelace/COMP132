#include "Package.h"

Package::Package(const string &sName, const string &sAdress, const string &sCity, const string &sState, int sZip, const string &rName, const string &rAdress, const string &rCity, const string &rState, int rZip, double weight, double cost)
{
	setSenderName(sName);
	setSenderAddress(sAdress);
	setSenderCity(sCity);
	setSenderState(sState);
	setSenderZIP(sZip);
	
	setRecipientName(rName);
	setRecipientAddress(rAdress);
	setRecipientCity(rCity);
	setRecipientState(rState);
	setRecipientZIP(rZip);

	setWeight(weight);
	setCostPerOunce(cost);
}

void Package::setSenderName(const string &name)
{
	senderName = name;
}

void Package::setSenderAddress(const string &adress)
{
	senderAdress = adress;
}

void Package::setSenderCity(const string &city)
{
	senderCity = city;
}

void Package::setSenderState(const string &state)
{
	senderState = state;
}

void Package::setSenderZIP(int zip)
{
	senderZIP = (zip > 0) ? zip : 100;

}

void Package::setRecipientName(const string &name)
{
	recipientName = name;
}

void Package::setRecipientAddress(const string &adress)
{
	recipientAdress = adress;
}

void Package::setRecipientCity(const string &city)
{
	recipientCity = city;
}

void Package::setRecipientState(const string &state)
{
	recipientState = state;
}

void Package::setRecipientZIP(int zip)
{
	recipientZIP = (zip > 0) ? zip : 100;
}

string Package::getSenderName() const
{
	return senderName;
}

string Package::getSenderAdress() const
{
	return senderAdress;
}

string Package::getSenderCity() const
{
	return senderCity;
}

string Package::getSenderState() const
{
	return senderState;
}

int Package::getSenderZIP() const
{
	return senderZIP;
}

string Package::getRecipientName() const
{
	return recipientName;
}

string Package::getRecipientAdress() const
{
	return recipientAdress;
}

string Package::getRecipientCity() const
{
	return recipientCity;
}

string Package::getRecipientState() const
{
	return recipientState;
}

int Package::getRecipientZIP() const
{
	return recipientZIP;
}

void Package::setWeight(double w)
{
	weight = (w > 0) ? w : 1;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerOunce(double cost)
{
	costPerOunce = (cost > 0) ? cost : 1;
}

double Package::getCostPerOunce() const
{
	return costPerOunce;
}

double Package::calculateCost() const
{
	return weight*costPerOunce;
}
