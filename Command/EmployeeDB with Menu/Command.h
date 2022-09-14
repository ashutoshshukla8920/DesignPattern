//
//  Command.h
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef Command_h
#define Command_h
#include <iostream>
#include <stack>
class Command {
public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;
    virtual ~Command() {};
};

inline std::stack<Command*> g_Stack{};
#endif /* Command_h */
