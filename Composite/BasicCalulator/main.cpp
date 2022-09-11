//
//  main.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include <iostream>
#include <vector>
#include "Expression.hpp"
#include "FileHandler.hpp"
#include "Addition.hpp"
#include "Subtraction.hpp"
#include "CompositeAddition.hpp"


int main()
{
    Expression* fivePlusTwo = new Addition(5,2);
    Expression* fiveMinusTwo = new Subtraction(5,2);
    std::vector<Expression*> operations;
    operations.push_back(fivePlusTwo);
    operations.push_back(fiveMinusTwo);

    Expression* sevenPlusThree = new CompositeAddition(operations);
    std::cout<<sevenPlusThree->compute();
    Expression* e3(fivePlusTwo->copy());
    Expression* e4(sevenPlusThree->copy());
    std::cout<<e4->compute();
    FileHandler *fileHandler(new FileHandler("log.txt"));
    fileHandler->openFile();
    fivePlusTwo->dump(fileHandler);
    delete fivePlusTwo;
    delete fiveMinusTwo;
    delete sevenPlusThree;
    delete e3;
    delete e4;
}
