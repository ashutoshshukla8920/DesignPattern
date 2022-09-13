//
//  CompressedStream.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "CompressedStream.hpp"
void CompressedStream::Write(std::string s) {
    std::cout << "Compress data\n";
    FileStream::Write(s);
}

void CompressedStream::Read(){
    std::cout << "decompress data \n";
    FileStream::Read();
}
