#include "stack.h"
// the functions for the stack class for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab 6
#include "stack.h"


bool stack::full(){return top == size;};
bool stack::empty(){return top == 0;};
void stack::store(int val){ p[top++] = val;}
int stack::retrieve(){ return p[--top]; }
