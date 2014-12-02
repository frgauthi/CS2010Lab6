#include <vector>
#include <iostream>
#include "list.h"
#include "stack.h"
#include "queue.h"

using namespace std;

int main(){

stack s;
cout << s.empty();
cout << s.full();
s.store(100);
cout << s.retrieve();


return 0;
}
