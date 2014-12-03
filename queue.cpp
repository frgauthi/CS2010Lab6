// Function bodies for the Queue class for stack/queue lab with inheritence
// Author: Frankie Gauthier
// CS2010 Lab 6

#include "queue.h"

//returns a bool indicating if the queue is empty or not
// takes no parameters
bool queue::empty(){
	if(elements == 0)return true;
	else return false;
}

// returns a bool indicating if the queue is full or not
// takes no parameters
bool queue::full(){
	if(elements >= size) return true;
	else return false;
}

// returns nothing
// adds an element to the front of the queue
// takes an int as a parameter
void queue::store(int val){
	p[front++] = val;
	elements +=1;
}

// returns an int from the back of the queue and removes that element 
// takes no parameters
int queue::retrieve(){
	elements -=1;
	return p[back++];
}
