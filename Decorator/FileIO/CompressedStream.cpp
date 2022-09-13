//
//  CompressedStream.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "CompressedStream.hpp"

CompressedStream::CompressedStream(Stream* s) : m_FS(s){
    
}
void CompressedStream::Write(std::string s) {
    std::cout << "Compress data\n";
    m_FS->Write(s);
}

void CompressedStream::Read(){
    std::cout << "decompress data \n";
    m_FS->Read();
}

