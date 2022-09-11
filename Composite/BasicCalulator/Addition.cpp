//
//  Addition.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "Addition.hpp"
#include "FileHandler.hpp"

Addition::Addition(int x, int y) :value1(x), value2(y)
{
}

Addition::Addition(const Addition &exp)
{
    value1 = exp.value1;
    value2 = exp.value2;
}

int Addition::compute()
{
    return value1 + value2;
}


Expression* Addition::copy()
{
    return new Addition(value1, value2);
}

void Addition::dump(FileHandler* fileHandler)
{
    fileHandler->writeOpenBraces();
    fileHandler->writeValue(value1);
    fileHandler->writeOperation("+");
    fileHandler->writeValue(value2);
    fileHandler->writeCloseBraces();
}
