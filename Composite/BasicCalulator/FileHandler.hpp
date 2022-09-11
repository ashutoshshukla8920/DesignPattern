//
//  FileHandler.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef FileHandler_hpp
#define FileHandler_hpp
#include <iostream>

class FileHandler
{
    const char* fileName;
    FILE* fd;
public:
    explicit FileHandler(const char* fileName);
    void openFile();
    void writeOpenBraces();
    void writeCloseBraces();
    void writeValue(int value);
    void writeOperation(const char* operation);
};

#endif /* FileHandler_hpp */
