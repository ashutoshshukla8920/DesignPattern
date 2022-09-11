//
//  Multiply.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef Multiply_hpp
#define Multiply_hpp
#include "Expression.hpp"

class Multiply : public Expression
{
private:
    int value1;
    int value2;
public:
    Multiply(int x, int y);
    Multiply(const Multiply &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};

#endif /* Multiply_hpp */
