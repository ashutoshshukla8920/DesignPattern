//
//  main.cpp
//  CompileTimeStretegy
//
//  Created by Ashutosh Shukla on 09/09/22.
//

#include <iostream>
#include "Array.hpp"
#include <thread>

int main(int argc, const char * argv[]) {
    // insert code here...
    Array<int> arr;
    std::thread t1{[&arr]() {
        for(int i = 0; i < 10; i++) {
            arr.add(i);
        }
    }};
    std::thread t2{[&arr]() {
        for(int i = 10; i < 15; i++) {
            arr.add(i);
        }
    }};
    t1.join();
    t2.join();
    for(int i = 0; i < arr.size(); i++) {
        std::cout<<arr.get(i)<<" ";
    }
    return 0;
}
