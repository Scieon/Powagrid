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

	int j = 0;
	for (; i != observers->end(); ++i) {
		(*i)->update(resource, quantity);
	}
}