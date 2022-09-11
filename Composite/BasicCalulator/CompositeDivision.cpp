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
    return operations[0]->compute() + operations[1]->compute();
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
