#ifndef OVERNIGHTPAKAGE_H
#define OVERNIGHTPAKAGE_H
#include "Package.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(const string &, const string &, const string &, const string &, int, const string &, const string &, const string &, const string &,
		int, double, double, double);
	void SetOvernightFeePerOunce(double);
	double getOvernightFeePerOunce() const;
	double calculateCost() const;
private:
	double overnightFeePerOunce;
};

#endif // TWODAYPACKAGE_H

