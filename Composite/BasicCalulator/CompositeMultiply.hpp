//
//  CompositeMultiply.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef CompositeMultiply_hpp
#define CompositeMultiply_hpp
#include "Expression.hpp"
#include <vector>

class CompositeMultiply : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeMultiply(std::vector<Expression*>& arithmatics);
    CompositeMultiply(const CompositeMultiply &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};

#endif /* CompositeMultiply_hpp */
