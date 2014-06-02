//
//  StringBad.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 6/2/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STRING_BAD_H_
#define STRING_BAD_H_

#include <iostream>



class StringBad {
public:
    StringBad();
    StringBad(const char *s);
    ~StringBad();
    
    friend std::ostream & operator<<(std::ostream &os, const StringBad &st);
    
private:
    char *str;
    int len;
    static int num_strings;
};

#endif