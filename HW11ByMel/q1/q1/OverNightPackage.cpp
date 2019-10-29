#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &sName, const string &sAdress, const string &sCity, const string &sState, int sZip, const string &rName, const string &rAdress, const string &rCity, const string &rState, int rZip, double weight, double cost, double flatFee)
	: Package(sName, sAdress, sCity, sState, sZip, rName, rAdress, rCity, rState, rZip, weight, cost)
{
	SetOvernightFeePerOunce(cost);
}

void OvernightPackage::SetOvernightFeePerOunce(double cost)
{
	overnightFeePerOunce = (cost > 0 ) ?  cost : 1;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
	return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
	return Package::calculateCost() + (getWeight() * getOvernightFeePerOunce());
}