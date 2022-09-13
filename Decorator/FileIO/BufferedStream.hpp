//
//  BufferedStream.hpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef BufferedStream_hpp
#define BufferedStream_hpp

#include "FileStream.hpp"
#include <string>
class BufferedStream : public FileStream {
public:
    void Write(std::string s)override;
    void Read()override;
};

#endif /* BufferedStream_hpp */
