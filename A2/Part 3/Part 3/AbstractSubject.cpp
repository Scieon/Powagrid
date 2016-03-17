#pragma once
#include "AbstractSubject.h"

AbstractSubject::AbstractSubject() {
	observers = new list<ResourceMarketView *>;
}

AbstractSubject::~AbstractSubject() {


	list<ResourceMarketView *>::iterator i = observers->begin();

	//Delete all observers in list
	for (; i != observers->end(); ++i) {
		delete * i;
	}
	delete observers;
}

