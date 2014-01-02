//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>



int main()
{
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter feline: ";
    cin >> charr1;
    cout << "Enter another feline: ";
    cin >> str1;
    cout << endl;
    
    cout << "charr1: " << charr1 << endl;
    cout << "str1: " << str1 << endl;
    cout << endl;
    
    cout << "charr2[2]: " << charr2[2] << endl;
    cout << "str2[2]: " << str2[2] << endl;
    
    return 0;
}