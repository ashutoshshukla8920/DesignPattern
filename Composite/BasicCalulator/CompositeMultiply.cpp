//
//  CompositeMultiply.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "CompositeMultiply.hpp"
#include "FileHandler.hpp"

CompositeMultiply::CompositeMultiply(std::vector<Expression*>& arithmatics)
{
    for(int i = 0; i < 2; i++) {
        operations.push_back(arithmatics[i]);
    }
}

CompositeMultiply::CompositeMultiply(const CompositeMultiply& exp)
{
    operations = exp.operations;
}

int CompositeMultiply::compute()
{
    return operations[0]->compute() + operations[1]->compute();
}

Expression* CompositeMultiply::copy()
{
    return new CompositeMultiply(operations);
}

void CompositeMultiply::dump(FileHandler* fileHandler)
{
    operations[0]->dump(fileHandler);
    fileHandler->writeOperation("*");
    operations[1]->dump(fileHandler);
}

