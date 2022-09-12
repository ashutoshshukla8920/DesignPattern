//
//  main.cpp
//  Proxy
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include <iostream>
#include "Array.h"
#include <thread>

int main(int argc, const char * argv[]) {
    ConcurrentArray<int> arr;
    std::thread t1{ [&arr](){
        for(int i = 0; i < 5; i++) {
            arr.add(i);
        }
    }};
    
    std::thread t2{ [&arr](){
        for(int i = 0; i < 5; i++) {
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
