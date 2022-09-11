//
//  UnaryExpression.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "UnaryExpression.hpp"
#include "FileHandler.hpp"

UnaryExpression::UnaryExpression(int x) : value(x)
{
}

UnaryExpression::UnaryExpression(const UnaryExpression &exp)
{
    value = exp.value;
}

int UnaryExpression::compute()
{
    return value;
}

Expression* UnaryExpression::copy()
{
    return new UnaryExpression(value);
}

void UnaryExpression::dump(FileHandler* fileHandler)
{
    fileHandler->writeOpenBraces();
    fileHandler->writeValue(value);
    fileHandler->writeCloseBraces();
}


