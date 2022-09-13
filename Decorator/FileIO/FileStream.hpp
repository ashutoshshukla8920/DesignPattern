//
//  FileStream.hpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef FileStream_hpp
#define FileStream_hpp
#include "Stream.h"
#include <string>
class FileStream : public Stream {
    std::string m_S = "DefaultString";
public:
    void Write(std::string s)override;
    void Read()override;
};

#endif /* FileStream_hpp */
