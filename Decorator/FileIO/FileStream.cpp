//
//  FileStream.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "FileStream.hpp"

void FileStream::Write(std::string s) {
    m_S =  s;
    std::cout<<"Written:" + s << "\n";
}

void FileStream::Read(){
    std::cout << "Read: " + m_S << "\n";
}
