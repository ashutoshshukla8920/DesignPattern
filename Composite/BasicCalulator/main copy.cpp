//
//  main.cpp
//  CompositePattern
//
//  Created by Ashutosh Shukla on 11/09/22.
//

#include <iostream>
#include <vector>

class FileHandler
{
    const char* fileName;
    FILE* fd;
public:
    FileHandler(const char* fileName) : fileName(fileName)
    {

    }

    void openFile()
    {
        fd = fopen(fileName, "w");
    }

    void writeOpenBraces()
    {
        fprintf(fd, "(");
    }

    void writeCloseBraces()
    {
        fprintf(fd, ")");
    }

    void writeValue(int value)
    {
        fprintf(fd, "%d", value);
    }
    
    void writeOperation(const char* operation)
    {
        fprintf(fd, "%s", operation);
    }
};

class Expression
{
public:
    virtual int compute() = 0;
    virtual Expression* copy() = 0;
    virtual void dump(FileHandler* fileHandler) = 0;
    virtual ~Expression() {

    };
};

class Unary : public Expression
{
private:
    int value;
public:
    Unary(int x) : value(x)
    {
    }

    Unary(const Unary &exp)
    {
        value = exp.value;
    }

    int compute()
    {
        return value;
    }

    Expression* copy()
    {
        return new Unary(value);
    }

    void dump(FileHandler* fileHandler)
    {
        fileHandler->writeOpenBraces();
        fileHandler->writeValue(value);
        fileHandler->writeCloseBraces();
    }

};

class Addition : public Expression
{
private:
    int value1;
    int value2;
public:
    Addition(int x, int y) :value1(x), value2(y)
    {
    }

    Addition(const Addition &exp)
    {
        value1 = exp.value1;
        value2 = exp.value2;
    }

    int compute()
    {
        return value1 + value2;
    }


    Expression* copy()
    {
        return new Addition(value1, value2);
    }

    void dump(FileHandler* fileHandler)
    {
        fileHandler->writeOpenBraces();
        fileHandler->writeValue(value1);
        fileHandler->writeOperation("+");
        fileHandler->writeValue(value2);
        fileHandler->writeCloseBraces();
    }
};

class Subtraction : public Expression
{
private:
    int value1;
    int value2;
public:
    Subtraction(int x, int y) :value1(x), value2(y)
    {
    }

    Subtraction(const Subtraction &exp)
    {
        value1 = exp.value1;
        value2 = exp.value2;
    }

    int compute()
    {
        return value1 - value2;
    }

    Expression* copy()
    {
        return new Subtraction(value1, value2);
    }

    void dump(FileHandler* fileHandler)
    {
        fileHandler->writeOpenBraces();
        fileHandler->writeValue(value1);
        fileHandler->writeOperation("-");
        fileHandler->writeValue(value2);
        fileHandler->writeCloseBraces();
    }
};

class Multiply : public Expression
{
private:
    int value1;
    int value2;
public:
    Multiply(int x, int y) :value1(x), value2(y)
    {
    }

    Multiply(const Multiply &exp)
    {
        value1 = exp.value1;
        value2 = exp.value2;
    }

    int compute()
    {
        return value1 * value2;
    }

    Expression* copy()
    {
        return new Multiply(value1, value2);
    }

    void dump(FileHandler* fileHandler)
    {
        fileHandler->writeOpenBraces();
        fileHandler->writeValue(value1);
        fileHandler->writeOperation("*");
        fileHandler->writeValue(value2);
        fileHandler->writeCloseBraces();
    }
};

class Division : public Expression
{
private:
    int value1;
    int value2;
public:
    Division(int x, int y) :value1(x), value2(y)
    {
    }
    Division(const Division &exp)
    {
        value1 = exp.value1;
        value2 = exp.value2;
    }

    int compute()
    {
        return value1 / value2;
    }


    Expression* copy()
    {
        return new Division(value1, value2);
    }

    void dump(FileHandler* fileHandler)
    {
        fileHandler->writeOpenBraces();
        fileHandler->writeValue(value1);
        fileHandler->writeOperation("/");
        fileHandler->writeValue(value2);
        fileHandler->writeCloseBraces();
    }
};

class CompositeAddition : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeAddition(std::vector<Expression*>& arithmatics)
    {
        for(int i = 0; i < 2; i++) {
            operations.push_back(arithmatics[i]);
        }
    }

    CompositeAddition(const CompositeAddition& exp)
    {
        operations = exp.operations;
    }

    int compute()
    {
        return operations[0]->compute() + operations[1]->compute();
    }

    Expression* copy()
    {
        return new CompositeAddition(operations);
    }

    void dump(FileHandler* fileHandler)
    {
        operations[0]->dump(fileHandler);
        fileHandler->writeOperation("+");
        operations[1]->dump(fileHandler);
    }

};

class CompositeSubtraction : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeSubtraction(std::vector<Expression*>& arithmatics)
    {
        for(int i = 0; i < 2; i++) {
            operations.push_back(arithmatics[i]);
        }
    }

    CompositeSubtraction(const CompositeSubtraction& exp)
    {
        operations = exp.operations;
    }

    int compute()
    {
        return operations[0]->compute() - operations[1]->compute();
    }

    Expression* copy()
    {
        return new CompositeSubtraction(operations);
    }

    void dump(FileHandler* fileHandler)
    {
        operations[0]->dump(fileHandler);
        fileHandler->writeOperation("-");
        operations[1]->dump(fileHandler);
    }
};

class CompositeMultiply : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeMultiply(std::vector<Expression*>& arithmatics)
    {
        for(int i = 0; i < 2; i++) {
            operations.push_back(arithmatics[i]);
        }
    }

    CompositeMultiply(const CompositeMultiply& exp)
    {
        operations = exp.operations;
    }

    int compute()
    {
        return operations[0]->compute() * operations[1]->compute();
    }

    Expression* copy()
    {
        return new CompositeMultiply(operations);
    }

    void dump(FileHandler* fileHandler)
    {
        operations[0]->dump(fileHandler);
        fileHandler->writeOperation("*");
        operations[1]->dump(fileHandler);
    }
};

class CompositeDivide : public Expression
{
private:
    std::vector<Expression*> operations;
public:
    CompositeDivide(std::vector<Expression*>& arithmatics)
    {
        for(int i = 0; i < 2; i++) {
            operations.push_back(arithmatics[i]);
        }
    }

    CompositeDivide(const CompositeDivide& exp)
    {
        operations = exp.operations;
    }

    int compute()
    {
        return operations[0]->compute() / operations[1]->compute();
    }

    Expression* copy()
    {
        return new CompositeDivide(operations);
    }

    void dump(FileHandler* fileHandler)
    {
        operations[0]->dump(fileHandler);
        fileHandler->writeOperation("/");
        operations[1]->dump(fileHandler);
    }
};

int main()
{
    Expression* fivePlusTwo = new Addition(5,2);
    Expression* fiveMinusTwo = new Subtraction(5,2);
    std::vector<Expression*> operations;
    operations.push_back(fivePlusTwo);
    operations.push_back(fiveMinusTwo);

    Expression* sevenPlusThree = new CompositeAddition(operations);
    std::cout<<sevenPlusThree->compute();
    Expression* e3(fivePlusTwo->copy());
    Expression* e4(sevenPlusThree->copy());
    std::cout<<e4->compute();
    FileHandler *fileHandler(new FileHandler("/Users/asshukla/Desktop/Dream/Design\ Pattern\ HandON/CompositePattern/CompositePattern/log.txt"));
    fileHandler->openFile();
    fivePlusTwo->dump(fileHandler);
    delete fivePlusTwo;
    delete fiveMinusTwo;
    delete sevenPlusThree;
    delete e3;
    delete e4;
}
