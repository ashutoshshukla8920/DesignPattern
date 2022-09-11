//
//  Addition.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef Addition_hpp
#define Addition_hpp
#include "Expression.hpp"

class Addition : public Expression
{
private:
    int value1;
    int value2;
public:
    Addition(int x, int y);
    Addition(const Addition &exp);
    int compute() override;
    Expression* copy() override;
    void dump(FileHandler* fileHandler) override;
};


#endif /* Addition_hpp */
