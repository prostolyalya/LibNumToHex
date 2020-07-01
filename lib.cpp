#include "lib.h"

Lib::Lib()
{
}

std::string Lib::convertDecToHex(const int &num){
    std::stringstream stream;
    stream << std::hex << num;
    std::string result( stream.str() );
    return result;
}

std::string Lib::convertHexToDec(const std::string &data){
    std::stringstream stream;
    stream << std::dec << data;
    std::string result( stream.str() );
    return result;
}
