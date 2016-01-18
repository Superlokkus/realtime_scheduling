/*! @file main.cpp
 
 */

#include <iostream>

#include "task.hpp"

int main(int argc, const char * argv[]) {
    using std::cout; using std::endl;
    
    cout << "Enter tasks like \nT<i>(<phi>,<p>,<e>,<d>)\nT<i+1>(<phi>,<p>,<e>,<d>)\n..." << endl;
    
    periodic_task<double> foo;
    cout << foo << endl;
    std::cin >> foo;
    
    cout << foo << endl;;
    
    return 0;
}
