#include "lib.h"

Lib::Lib()
{
}

std::string Lib::convert(const int &num)
{
    std::stringstream stream;
    stream << std::hex << num;
    std::string result( stream.str() );
    return result;
}
