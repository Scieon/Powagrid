#ifndef RESOURCE_H
#define RESOURCE_H


class Resource {

public:

	virtual int getCost() const = 0;
	virtual void setCost(int cost) = 0;


private:
	//int cost;
};


#endif