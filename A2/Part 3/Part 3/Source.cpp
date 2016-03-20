#include <iostream>
#include "ResourceManager.h"
#include "ResourceMarket.h"
#include "ResourceMarketView.h"

using namespace std;

int main() {

	ResourceMarket * market = new ResourceMarket();
	ResourceMarketView * view1 = new ResourceMarketView(market);
	ResourceMarketView * view2 = new ResourceMarketView(market);

	market->detach(view2);

	//market->updateMarket("Coal", 3);


	cout << "For Demo purposes any input entered will not be validated. \nProper validation was handled in build 1 and omitted here for simplicity.\n" << endl;
	system("pause");
	market->showInfo();
	string resource;
	int quantity;

	/*
	For Demo purposes any input entered will not be validated. Proper validation was handled in build 1 and the details have been abstracted here for simplicity.
	*/
	while (true) {
		cout << "Inputs are case sensitive.\n";
		cout << "\nEnter Resource to buy(Coal,Oil,Garbage,Uranium): ";
		cin >> resource;
		cout << "\nEnter Amount of " << resource << " to buy: ";
		cin >> quantity;
		cout << endl << endl;
		market->updateMarket(resource, quantity);
	}

	cin.get();
	return 0;
}