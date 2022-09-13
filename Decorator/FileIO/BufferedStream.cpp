//
//  BufferedStream.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "BufferedStream.hpp"
void BufferedStream::Write(std::string s) {
    std::cout << "Write to buffer\n";
    FileStream::Write(s);
}

void BufferedStream::Read(){
    std::cout << "Read from buffer \n";
    FileStream::Read();
}
