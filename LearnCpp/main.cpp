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
    
    char charr[20];
    string str;
    
    cout << "charr length: " << strlen(charr) << endl;
    cout << "str length: " << str.size() << endl;
    cout << endl;
    
    cout << "Enter a text: ";
    cin.getline(charr, 20);
    cout << "charr: " << charr << endl;
    cout << endl;
    
    cout << "Enter another text: ";
    getline(cin, str);
    cout << "str: " << str << endl;
    cout << endl;
    
    cout << "charr length: " << strlen(charr) << endl;
    cout << "str length: " << str.size() << endl;
    cout << endl;
    
    return 0;
}