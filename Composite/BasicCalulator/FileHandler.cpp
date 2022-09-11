//
//  FileHandler.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "FileHandler.hpp"

FileHandler::FileHandler(const char* fileName) : fileName(fileName)
{

}

void FileHandler::openFile()
{
    fd = fopen(fileName, "w");
}

void FileHandler::writeOpenBraces()
{
    fprintf(fd, "(");
}

void FileHandler::writeCloseBraces()
{
    fprintf(fd, ")");
}

void FileHandler::writeValue(int value)
{
    fprintf(fd, "%d", value);
}

void FileHandler::writeOperation(const char* operation)
{
    fprintf(fd, "%s", operation);
}
