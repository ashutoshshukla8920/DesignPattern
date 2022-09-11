//
//  Division.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef Division_hpp
#define Division_hpp
#include "Expression.hpp"

class Division : public Expression
{
private:
    int value1;
    int value2;
public:
    Division(int x, int y);
    Division(const Division &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};

#endif /* Division_hpp */
