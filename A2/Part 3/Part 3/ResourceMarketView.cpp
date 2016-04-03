#include "ResourceMarketView.h"

ResourceMarketView::ResourceMarketView(){
	
}

//Constructor attaching itself onto a subject
ResourceMarketView::ResourceMarketView(ResourceMarket * market) {
	subject = market;
	subject->attach(this);
}

ResourceMarketView::~ResourceMarketView() {
	delete subject;

}

//Update will print out current resource market in addition to remaining quantities
void ResourceMarketView::update(string resource, int quantity) {

	subject->showInfo();
	cout << "\n" << quantity << " amounts of " << resource << " have been bought from the market. \n \n";
	subject->showRemaining();
	cout << endl;

	
}