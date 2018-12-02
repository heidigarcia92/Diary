//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "DateException.hpp"

DateException :: DateException (const string& err_msg, int err_code) : invalid_argument(err_msg) {
    if(err_code < 0 || err_code > 2){
        this->err_code = UNDEFINED;
    }
    else{
        this->err_code = err_code;
    }
}

int DateException :: code (){
    return err_code;
}
