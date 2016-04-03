#include <iostream>
#include "ResourceManager.h"
#include "ResourceMarket.h"
#include "ResourceMarketView.h"

using namespace std;

int main() {

	string resource;
	int quantity;

	cout << "For Demo purposes any input entered will not be validated. \nProper validation was handled in build 1 and omitted here for simplicity.\n" << endl;
	cin.get();

	//Create the subject
	ResourceMarket * market = new ResourceMarket();

	//Creating two observers attaching to the same subject
	ResourceMarketView * view1 = new ResourceMarketView(market);
	ResourceMarketView * view2 = new ResourceMarketView(market);

	//Detaching an observer
	market->detach(view2);

	//Display initial Market
	market->showInfo();

	while(true){
		cout << "Inputs are case sensitive.\n";
		cout << "Enter 'y' to exit.\n";
		cout << "\nEnter Resource to buy(Coal,Oil,Garbage,Uranium): ";
		cin >> resource;
		if (resource == "y")
			break;
		cout << "\nEnter Amount of " << resource << " to buy: ";
		cin >> quantity;
		cout << endl << endl;
		market->updateMarket(resource, quantity);
	}

	cin.get();
	return 0;
}