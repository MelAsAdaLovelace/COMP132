// 
// Driver program for Package hierarchy.
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::fixed;

#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition

int main()
{
	Package *packs[3];
	packs[ 0 ] = &Package("Lou Brown", "1 Main St", "Boston", "MA",
	   11111, "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5);

	packs[ 1 ] = &TwoDayPackage( "Lisa Klein", "5 Broadway",
      "Somerville", "MA", 33333, "Bob George", "21 Pine Rd", "Cambridge", 
      "MA", 44444, 10.5, .65, 2.0 );
	packs[ 2 ] = &OvernightPackage( "Ed Lewis", "2 Oak St", "Boston",
      "MA", 55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666, 
      12.25, .7, .25 );

	cout << fixed << setprecision(2);
	double totalShippingCost = 0;
	// print each package's information and cost
	for (size_t i = 0; i < sizeof(packs) /sizeof(packs[0]); i++) {
		cout << "Package "<< i+1 << ":\n\nSender:\n" << packs[i]->getSenderName()
			<< '\n' << packs[i]->getSenderAdress() << '\n'
			<< packs[i]->getSenderCity() << ", " << packs[i]->getSenderState()
			<< ' ' << packs[i]->getSenderZIP();
		cout << "\n\nRecipient:\n" << packs[i]->getRecipientName()
			<< '\n' << packs[i]->getRecipientAdress() << '\n'
			<< packs[i]->getRecipientCity() << ", "
			<< packs[i]->getRecipientState() << ' '
			<< packs[i]->getRecipientZIP();
		cout << "\n\nCost: $" << packs[i]->calculateCost() << endl;
		totalShippingCost += packs[i]->calculateCost();
	}
	cout << "Total shipping cost: $" << totalShippingCost << endl;
	std::getchar();
	

	system("pause");
	return 0;
} // end main


