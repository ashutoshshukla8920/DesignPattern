//
//  Command.h
//  Adapter
//
//  Created by Ashutosh Shukla on 14/09/22.
//

#ifndef Command_h
#define Command_h
class Command {
public:
    virtual void Execute(int id, const std::string &name, double salary) = 0;
    virtual ~Command() {};
};

#endif /* Command_h */
