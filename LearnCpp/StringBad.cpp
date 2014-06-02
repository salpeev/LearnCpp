//
//  StringBad.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 6/2/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "StringBad.h"
#include <cstring>

using std::cout;



int StringBad::num_strings = 0;



StringBad::StringBad() {
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::StringBad(const char *s) {
    len = (int)std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::~StringBad() {
    num_strings--;
    cout << "\"" << str << "\"" << " object deleted, " << num_strings << " left\n";
    delete [] str;
}

std::ostream & operator<<(std::ostream &os, const StringBad &st) {
    os << st.str;
    return os;
}