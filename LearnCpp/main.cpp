//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



unsigned int c_in_str(const char *str, char ch);



int main() {
    char mmm[15] = "minimum";
    char *wail = "ululate";
    
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    
    return 0;
}



unsigned int c_in_str(const char *str, char ch) {
    unsigned int count = 0;
    
    while (*str) {
        if (*str == ch) {
            count++;
        }
        
        str++;
    }
    
    return count;
}