#include "lib.h"

Lib::Lib()
{
}

std::string Lib::convertDecToHex(const int &num)
{
    std::stringstream stream;
    stream << std::hex << num;
    std::string result( stream.str() );
    return result;
}

int Lib::convertHexToDec(const std::string &data)
{
    std::stringstream stream;
    stream << std::hex << data;
    int res = 0;
    stream >> res;
    return res;
}
