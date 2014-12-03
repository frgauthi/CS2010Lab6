#ifndef stack_h
#define stack_h


// the header file for the stack class for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab 6
#include "list.h"

class stack : public list {
	private :
		int top;
		int size;
	public:
		explicit stack(int n = defaultSize ) : list(n) , top(0), size(n) {} ;

		bool empty();
		bool full();
		void store(int val);
		int  retrieve();
	
};

#endif
