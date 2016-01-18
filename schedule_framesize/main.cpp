/*! @file main.cpp
 
 */

#include <iostream>

#include "task.hpp"

int main(int argc, const char * argv[]) {
    using std::cout; using std::endl;
    
    cout << "Enter tasks like \nT<n>(<phi>,<p>,<e>,<d>)\nT<n>(<phi>,<p>,<e>,<d>)\n..." << endl;
    
    periodic_task<> t1(1,6.0,1.0);
    
    return 0;
}
