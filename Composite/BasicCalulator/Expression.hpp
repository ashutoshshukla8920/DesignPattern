//
//  Expression.hpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#ifndef Expression_hpp
#define Expression_hpp
#define DIVIDE_BY_ZERO 1

class FileHandler;
class Expression
{
public:
    virtual int compute() = 0;
    virtual Expression* copy() = 0;
    virtual void dump(FileHandler* fileHandler) = 0;
    virtual ~Expression() {
        
    };
};

#endif /* Expression_hpp */
