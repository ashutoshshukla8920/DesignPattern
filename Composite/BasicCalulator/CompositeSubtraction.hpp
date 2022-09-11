//
//  CompositeSubtraction.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef CompositeSubtraction_hpp
#define CompositeSubtraction_hpp
#include "Expression.hpp"
#include <vector>

class CompositeSubtraction : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeSubtraction(std::vector<Expression*>& arithmatics);
    CompositeSubtraction(const CompositeSubtraction &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};

#endif /* CompositeSubtraction_hpp */
