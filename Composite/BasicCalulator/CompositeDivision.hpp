//
//  CompositeDivision.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef CompositeDivision_hpp
#define CompositeDivision_hpp
#include "Expression.hpp"
#include <vector>

class CompositeDivision : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeDivision(std::vector<Expression*>& arithmatics);
    CompositeDivision(const CompositeDivision &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};


#endif /* CompositeDivision_hpp */
