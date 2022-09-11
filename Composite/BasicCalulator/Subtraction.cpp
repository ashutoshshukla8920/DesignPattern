//
//  Subtraction.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "Subtraction.hpp"
#include "FileHandler.hpp"

Subtraction::Subtraction(int x, int y) :value1(x), value2(y)
{
}

Subtraction::Subtraction(const Subtraction &exp)
{
    value1 = exp.value1;
    value2 = exp.value2;
}

int Subtraction::compute()
{
    return value1 - value2;
}

Expression* Subtraction::copy()
{
    return new Subtraction(value1, value2);
}

void Subtraction::dump(FileHandler* fileHandler)
{
    fileHandler->writeOpenBraces();
    fileHandler->writeValue(value1);
    fileHandler->writeOperation("-");
    fileHandler->writeValue(value2);
    fileHandler->writeCloseBraces();
}
