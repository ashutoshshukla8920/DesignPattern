//
//  CompositeAddition.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include "CompositeAddition.hpp"
#include "FileHandler.hpp"

CompositeAddition::CompositeAddition(std::vector<Expression*>& arithmatics)
{
    for(int i = 0; i < 2; i++) {
        operations.push_back(arithmatics[i]);
    }
}

CompositeAddition::CompositeAddition(const CompositeAddition& exp)
{
    operations = exp.operations;
}

int CompositeAddition::compute()
{
    return operations[0]->compute() + operations[1]->compute();
}

Expression* CompositeAddition::copy()
{
    return new CompositeAddition(operations);
}

void CompositeAddition::dump(FileHandler* fileHandler)
{
    operations[0]->dump(fileHandler);
    fileHandler->writeOperation("+");
    operations[1]->dump(fileHandler);
}


