#pragma once
#include <string>
#include <iostream>

using std::string;

class AbstractObserver {
	
public:
	virtual void update(string resource, int quantity) = 0;
};
