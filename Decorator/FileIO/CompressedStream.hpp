//
//  CompressedStream.hpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef CompressedStream_hpp
#define CompressedStream_hpp

#include "FileStream.hpp"
#include <string>
class CompressedStream : public FileStream {
public:
    void Write(std::string s)override;
    void Read()override;
};

#endif /* CompressedStream_hpp */
