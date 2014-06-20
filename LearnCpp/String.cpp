//
//  String.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 6/2/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "String.h"
#include <cstring>

using std::cout;



int String::num_strings = 0;



String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String &st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}

String::String(const char *s) {
    len = (int)std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::~String() {
    num_strings--;
    delete [] str;
}

String & String::operator=(const String &st) {
    if (this == &st) {
        return *this;
    }
    
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    
    return *this;
}

String & String::operator=(const char *s) {
    delete [] str;
    len = (int)strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

std::ostream & operator<<(std::ostream &os, const String &st) {
    os << st.str;
    return os;
}

std::istream & operator>>(std::istream &is, String &st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    
    while (is && is.get() != '\n') {
        continue;
    }
    
    return is;
}

bool operator<(const String &s1, const String &s2) {
    return (strcmp(s1.str, s1.str) < 0);
}

bool operator>(const String &s1, const String &s2) {
    return (s2 < s1);
}

bool operator==(const String &s1, const String &s2) {
    return (strcmp(s1.str, s2.str) == 0);
}
