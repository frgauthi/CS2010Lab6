// the functions for the stack class for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab 6
#include "stack.h"


// returns a bool indicating if the stack is full
// takes no parameters
bool stack::full(){return top >= size;}


// returns a bool indicating if the stack is empty
// takes no parameters
bool stack::empty(){return top == 0;}


// returns nothing
// stores an int on the top of the stack
// takes an int as a parameter
void stack::store(int val){ p[top++] = val;}


// returns an int from the top of the stack and removes it from the stack
// takes no parameters
int stack::retrieve(){ return p[--top]; }
