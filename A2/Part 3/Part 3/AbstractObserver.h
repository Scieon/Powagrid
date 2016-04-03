#pragma once
#include <string>
#include <iostream>

using std::string;

//Abstract class that the view will inherit from
class AbstractObserver {
	
public:
	virtual void update(string resource, int quantity) = 0;
};
