// Header file for the list class for Lab 6 CS 2010
// Author: Frankie Gauthier
// CS2010 Lab 6

#include <vector>

using namespace std;

//list class
class list {

	protected:
		vector<int> p;
	public:
		list(int n = 100){
			this->p.resize(n);
		}
	virtual bool empty() = 0;
	virtual bool full() = 0;
	virtual void store(int val) = 0;
	virtual int retrieve() = 0;
};
