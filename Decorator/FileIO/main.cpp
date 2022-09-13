//
//  main.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include <iostream>
#include "FileStream.hpp"
#include "Stream.h"
#include "BufferedStream.hpp"
#include "CompressedStream.hpp"

void useFS(Stream *fs) {
    fs->Write(std::string("HelloWorld"));
    fs->Read();
}

int main(int argc, const char * argv[]) {
    //FileStream fs;
    //BufferedStream fs;
    CompressedStream fs;
    useFS(&fs);
    return 0;
}
