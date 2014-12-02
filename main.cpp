// the main function for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab 6

#include <vector>
#include <iostream>
#include "stack.h"
//#include "queue.h"

using namespace std;

int main(){

stack s;
cout << (s.empty() ? "yes" : "no") << endl;
cout << (s.full() ? "yes" : "no") << endl;
s.store(100);
cout << s.retrieve();


return 0;
}
