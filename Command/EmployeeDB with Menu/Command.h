//
//  Command.h
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef Command_h
#define Command_h
#include <iostream>
class Command {
public:
    virtual void Execute() = 0;
    virtual ~Command() {};
};

#endif /* Command_h */
