#ifndef LIB_H
#define LIB_H

#include <string>
#include <sstream>

class Lib
{
public:
    Lib();

public:
    static std::string convertDecToHex(const int& num);
    static std::string convertHexToDec(const std::string& data);
};

#endif // LIB_H
