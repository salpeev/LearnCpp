//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>



int main()
{
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += " paste";
    strcat(charr1, " juice");
    
    size_t len1 = str1.size();
    size_t len2 = strlen(charr1);
    
    cout << "len1: " << len1 << endl;
    cout << "len2: " << len2 << endl;
    
    return 0;
}