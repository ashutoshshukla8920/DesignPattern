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
#include "FileStream.hpp"

void useFS(Stream *fs) {
    fs->Write(std::string("HelloWorld"));
    fs->Read();
}

int main(int argc, const char * argv[]) {
    //FileStream fs;
    //BufferedStream fs;
    //CompressedStream fs(new FileStream);
    // now client wants to have compressed and buffered stream
    CompressedStream fs(CompressedStream(new BufferedStream(new FileStream)));
    useFS(&fs);
    return 0;
}
