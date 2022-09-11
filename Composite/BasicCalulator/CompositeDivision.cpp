//
//  CompositeDivision.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "CompositeDivision.hpp"
#include "FileHandler.hpp"

CompositeDivision::CompositeDivision(std::vector<Expression*>& arithmatics)
{
    for(int i = 0; i < 2; i++) {
        operations.push_back(arithmatics[i]);
    }
}

CompositeDivision::CompositeDivision(const CompositeDivision& exp)
{
    operations = exp.operations;
}

int CompositeDivision::compute()
{
    int value1 = operations[0]->compute();
    int value2 = operations[1]->compute();
    if(value2 == 0) {
        throw DIVIDE_BY_ZERO;
    }
    return value1/value2;
}

Expression* CompositeDivision::copy()
{
    return new CompositeDivision(operations);
}

void CompositeDivision::dump(FileHandler* fileHandler)
{
    operations[0]->dump(fileHandler);
    fileHandler->writeOperation("/");
    operations[1]->dump(fileHandler);
}
