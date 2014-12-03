// Header file for the Queue class for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab6
#ifndef queue_h
#define queue_h
#include "list.h"

class queue : public list {

	private:
		int front;
		int back;
		int elements;
		int size;
	public:

		explicit queue(int n = defaultSize) : list(n), size(n), front(0), back(0), elements(0) {} ;

		bool empty();
		bool full();
		void store(int val);
		int retrieve();

};

#endif
