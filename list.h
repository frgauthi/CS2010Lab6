// Header file for the list class for Lab 6 CS 2010
// Author: Frankie Gauthier
// CS2010 Lab 6
#ifndef list_h
#define list_h

#include <vector>
#define defaultSize 10
using namespace std;

//list class
class list {

	protected:
		vector<int> p;
	public:
		list(int n = defaultSize){
			this->p.resize(n);
		}
	virtual bool empty() = 0;
	virtual bool full() = 0;
	virtual void store(int val) = 0;
	virtual int retrieve() = 0;
};

#endif
