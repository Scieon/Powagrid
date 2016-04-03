#pragma once
#include "AbstractObserver.h"
#include "ResourceMarket.h"

using namespace std;

//ResourceMarketView is the observer class
class ResourceMarketView : public AbstractObserver {

public:
	ResourceMarketView();
	ResourceMarketView(ResourceMarket * market);
	~ResourceMarketView();
	void update(string resource, int quantity);

private:
	ResourceMarket * subject;
};