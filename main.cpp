// the main function for the stack/queue inheritence lab
// Author: Frankie Gauthier
// CS2010 Lab 6

#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main(){

cout << "Creating Stack.." << endl;

stack s(10);
cout << "\nIs the stack empty?" << (s.empty() ? "yes" : "no") << endl;
cout << "\nIs the stack full? "  << (s.full() ? "yes" : "no") << endl;

for(int i = 0; i<10;i++) s.store(i);
cout << "\nStack filled.. " << endl;
cout << "\nIs the stack empty?" << (s.empty() ? "yes" : "no") << endl;
cout << "\nIs the stack full? "  << (s.full() ? "yes" : "no") << endl;

for(int i = 0; i<10;i++) cout << s.retrieve() << endl;
cout << "\nIs the stack empty?" << (s.empty() ? "yes" : "no") << endl;
cout << "\nIs the stack full? "  << (s.full() ? "yes" : "no") << endl;


cout << "\n\nCreating Queue.." << endl;

queue q(10);
cout << "\nIs the Queue empty? " << (q.empty() ? "yes" : "no") << endl;
cout <<"\nIs the Queue full? " << (q.full() ? "yes" : "no") << endl;

for(int i = 0; i<10;i++) q.store(i);
cout << "\nQueue filled.. " << endl;
cout << "\nIs the Queue empty? " << (q.empty() ? "yes" : "no") << endl;
cout <<"\nIs the Queue full? " << (q.full() ? "yes" : "no") << endl;

for(int i = 0; i<10;i++) cout << q.retrieve() << endl;
cout << "\nIs the Queue empty? " << (q.empty() ? "yes" : "no") << endl;
cout <<"\nIs the Queue full? " << (q.full() ? "yes" : "no") << endl;


return 0;
}
