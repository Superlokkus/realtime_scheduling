/*! @file main.cpp
 
 */

#include <iostream>

#include "task.hpp"
#include "task_set.hpp"

int main(int argc, const char * argv[]) {
    using std::cout; using std::endl;
    
    cout << "Enter tasks like \nT<i>(<phi>,<p>,<e>,<d>)\nT<i+1>(<phi>,<p>,<e>,<d>)\n..." << endl;

    realtime_scheduling::task_set foo;
    
    while(std::cin >> foo);
    
    cout << foo << endl;;
    
    return 0;
}
