//
//  Division.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "Division.hpp"
#include "FileHandler.hpp"

Division::Division(int x, int y) :value1(x), value2(y)
{
}

Division::Division(const Division &exp)
{
    value1 = exp.value1;
    value2 = exp.value2;
}

int Division::compute()
{
    if(value2 == 0) {
        throw DIVIDE_BY_ZERO;
    }
    return value1 / value2;
}

Expression* Division::copy()
{
    return new Division(value1, value2);
}

void Division::dump(FileHandler* fileHandler)
{
    fileHandler->writeOpenBraces();
    fileHandler->writeValue(value1);
    fileHandler->writeOperation("/");
    fileHandler->writeValue(value2);
    fileHandler->writeCloseBraces();
}
