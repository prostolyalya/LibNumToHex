#ifndef LIB_H
#define LIB_H

#include <string>
#include <sstream>

namespace libConvert {
    std::string convertDecToHex(const int& num);
    int convertHexToDec(const std::string& data);
}

#endif // LIB_H
