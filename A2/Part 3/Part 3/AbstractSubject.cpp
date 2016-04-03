#pragma once
#include "AbstractSubject.h"

AbstractSubject::AbstractSubject() {
	observers = new list<AbstractObserver *>;
}

AbstractSubject::~AbstractSubject() {


	list<AbstractObserver *>::iterator i = observers->begin();

	//Delete all observers in list
	for (; i != observers->end(); ++i) {
		delete * i;
	}
	delete observers;
}


void AbstractSubject::attach(AbstractObserver  * observer) {

	observers->push_back(observer);

}

void AbstractSubject::detach(AbstractObserver * observer) {

	observers->remove(observer);
}

void AbstractSubject::notify(string resource, int quantity) {

	list<AbstractObserver *>::iterator i = observers->begin();

	//Loop through whole list of observers and update every single one
	//This method is called when purchasing resources from the market using the updateMarket method in the ResourceMarket Class
	for (; i != observers->end(); ++i) {
		(*i)->update(resource, quantity);
	}
}