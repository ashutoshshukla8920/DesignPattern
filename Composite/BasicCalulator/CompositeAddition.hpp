//
//  CompositeAddition.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef CompositeAddition_hpp
#define CompositeAddition_hpp

#include "Expression.hpp"
#include <vector>

class CompositeAddition : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeAddition(std::vector<Expression*>& arithmatics);
    CompositeAddition(const CompositeAddition &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};
#endif /* CompositeAddition_hpp */
