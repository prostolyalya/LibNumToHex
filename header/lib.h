#ifndef LIB_H
#define LIB_H

#include <string>
#include <sstream>

namespace libConvert {
    static std::string convertDecToHex(const int& num);
    static int convertHexToDec(const std::string& data);
}

#endif // LIB_H
