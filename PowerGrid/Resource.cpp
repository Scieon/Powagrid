#include "Resource.h"
#include <iostream>
using namespace std;


Resource::~Resource() {
	cout << "Deleting from Resource" << endl;
}
Resource::Resource() {


}

 void Resource::setCost(int cost) {
	cout << "Parent" << endl;
}

int  Resource::getCost()const {
	cout << "Parent" << endl;

	return 0;
}