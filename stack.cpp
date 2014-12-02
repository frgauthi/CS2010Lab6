#include "stack.h"


bool stack::empty(){
	return this->p.size();
}
bool stack::full(){return false;}
void stack::store(int val){this->p.push_back(val);}
int stack::retrieve(){return this->p.pop_back();}
