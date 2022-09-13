//
//  BufferedStream.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "BufferedStream.hpp"
BufferedStream::BufferedStream(Stream* s) : m_FS(s){
    
}

void BufferedStream::Write(std::string s) {
    std::cout << "Write to buffer\n";
//    FileStream::Write(s);
    m_FS->Write(s);
}

void BufferedStream::Read(){
    std::cout << "Read from buffer \n";
//    FileStream::Read();
    m_FS->Read();
}
