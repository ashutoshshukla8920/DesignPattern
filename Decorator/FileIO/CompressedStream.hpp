//
//  CompressedStream.hpp
//  Decorator
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef CompressedStream_hpp
#define CompressedStream_hpp

#include "Stream.h"
#include <string>
// we need to inherit compressedstream from stream otherwise usefs will not work
class CompressedStream : public Stream {
    Stream *m_FS;
public:
    CompressedStream(Stream *s);
    void Write(std::string s);
    void Read();
};

#endif /* CompressedStream_hpp */
