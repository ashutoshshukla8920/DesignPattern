//
//  Subtraction.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef Subtraction_hpp
#define Subtraction_hpp

#include "Expression.hpp"

class Subtraction : public Expression
{
private:
    int value1;
    int value2;
public:
    Subtraction(int x, int y);
    Subtraction(const Subtraction &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};


#endif /* Subtraction_hpp */
