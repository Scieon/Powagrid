#include "ResourceMarketView.h"

ResourceMarketView::ResourceMarketView(){
	
}

ResourceMarketView::ResourceMarketView(ResourceMarket * market) {
	subject = market;
	subject->attach(this);
}

ResourceMarketView::~ResourceMarketView() {
	delete subject;

}

void ResourceMarketView::update(string resource, int quantity) {

	subject->showInfo();
	cout << "\n" << quantity << " amounts of " << resource << " have been bought from the market. \n \n";
	subject->showRemaining();
	cout << endl;

	
}