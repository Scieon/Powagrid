#include "Resource.h"



Resource::~Resource() {
	cout << "Deleting from Resource" << endl;
}
Resource::Resource() {
	

}

void Resource::setColor(string color) {
	this->color = color;
}

string Resource::getColor() const {
	return color;
}
 void Resource::setCost(int cost) {
	cout << "Parent" << endl;
}

int  Resource::getCost()const {
	cout << "Parent" << endl;

	return 0;
}