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
    
    wchar_t str1[] = L"String 1";
    char16_t str2[] = u"String 2";
    char32_t str3[] = U"String 3";
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << u8"String 4" << endl;
    cout << R"(Strign 5 "" \n)" << endl;
    cout << R"+*(Test "(String 6)" test)+*" << endl;
    
    return 0;
}