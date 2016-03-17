#pragma once
#include "AbstractObserver.h"

//Subscribers to channels
//ResourceMarket View
class ResourceMarketView : public AbstractObserver {

public:
	ResourceMarketView();
	~ResourceMarketView();
	void update();
};