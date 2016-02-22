#ifndef RESOURCE_H
#define RESOURCE_H


class Resource {

public:

	Resource();
	virtual int getCost() const;
	virtual void setCost(int cost);


private:
	//int cost;
};


#endif