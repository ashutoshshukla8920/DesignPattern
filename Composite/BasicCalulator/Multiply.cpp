//
//  Multiply.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "Multiply.hpp"
#include "FileHandler.hpp"

Multiply::Multiply(int x, int y) :value1(x), value2(y)
{
}

Multiply::Multiply(const Multiply &exp)
{
    value1 = exp.value1;
    value2 = exp.value2;
}

int Multiply::compute()
{
    return value1 * value2;
}

Expression* Multiply::copy()
{
    return new Multiply(value1, value2);
}

void Multiply::dump(FileHandler* fileHandler)
{
    fileHandler->writeOpenBraces();
    fileHandler->writeValue(value1);
    fileHandler->writeOperation("*");
    fileHandler->writeValue(value2);
    fileHandler->writeCloseBraces();
}
