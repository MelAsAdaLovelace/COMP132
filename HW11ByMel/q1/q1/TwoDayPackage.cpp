#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &sName, const string &sAdress, const string &sCity, const string &sState, int sZip, const string &rName, const string &rAdress, const string &rCity, const string &rState, int rZip, double weight, double cost, double flatFee)
	: Package(sName, sAdress, sCity, sState, sZip, rName, rAdress, rCity, rState, rZip, weight, cost)
{
	setFlatFee(flatFee);

}

void TwoDayPackage::setFlatFee(double fee)
{
	flatFee = (fee > 0) ? fee : 1;
}

double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

double TwoDayPackage::calculateCost() const
{
	return Package::calculateCost() + getFlatFee();
}
