//
//  main.cpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include <iostream>
#include "FileStream.hpp"
#include "Stream.h"

void useFS(Stream *fs) {
    fs->Write(std::string("Helloworld"));
    fs->Read();
}

int main(int argc, const char * argv[]) {
    FileStream fs;
    useFS(&fs);
    return 0;
}
