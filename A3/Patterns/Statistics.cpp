#include "Statistics.h"

//Constructor attaching this observer onto subject
Statistics::Statistics(Board * board) {
	subject = board;
	subject->attach(this);
}

Statistics::Statistics() {

}

//Destructor freeing heap storage
Statistics::~Statistics() {
	delete subject;
}