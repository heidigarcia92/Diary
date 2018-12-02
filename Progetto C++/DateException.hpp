//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_DATEEXCEPTION_HPP
#define DIARY_DATEEXCEPTION_HPP


#include <stdexcept>
#include <string>

using namespace std;

class DateException : public invalid_argument {
public:
    enum codes {
        UNDEFINED,
        STRING_INVALID_FORMAT,
        INVALID_FORMAT
    };
    DateException(const std::string& err_msg, int err_code = 0);
    int code();
private:
    int err_code;

};

#endif //DIARY_DATEEXCEPTION_HPP
