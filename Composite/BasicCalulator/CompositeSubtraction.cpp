//
//  CompositeSubtraction.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "CompositeSubtraction.hpp"
#include "FileHandler.hpp"

CompositeSubtraction::CompositeSubtraction(std::vector<Expression*>& arithmatics)
{
    for(int i = 0; i < 2; i++) {
        operations.push_back(arithmatics[i]);
    }
}

CompositeSubtraction::CompositeSubtraction(const CompositeSubtraction& exp)
{
    operations = exp.operations;
}

int CompositeSubtraction::compute()
{
    return operations[0]->compute() + operations[1]->compute();
}

Expression* CompositeSubtraction::copy()
{
    return new CompositeSubtraction(operations);
}

void CompositeSubtraction::dump(FileHandler* fileHandler)
{
    operations[0]->dump(fileHandler);
    fileHandler->writeOperation("-");
    operations[1]->dump(fileHandler);
}
