//
//  UnaryExpression.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef UnaryExpression_hpp
#define UnaryExpression_hpp
#include "Expression.hpp"

class FileHandler;

class UnaryExpression : public Expression
{
private:
    int value;
public:
    UnaryExpression(int x);
    UnaryExpression(const UnaryExpression &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};

#endif /* UnaryExpression_hpp */
