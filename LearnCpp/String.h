//
//  String.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 6/2/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STRING_H_
#define STRING_H_

#include <iostream>



class String {
public:
    String();
    String(const String &st);
    String(const char *s);
    ~String();
    
    int length() const {return len;}
    
    String & operator=(const String &st);
    String & operator=(const char *s);
    char & operator[](int i);
    const char & operator[](int i) const;
    
    friend std::ostream & operator<<(std::ostream &os, const String &st);
    friend std::istream & operator>>(std::istream &is, String &st);
    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
    friend bool operator==(const String &s1, const String &s2);
    
    static int HowMany() {return num_strings;}
    
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
};

#endif