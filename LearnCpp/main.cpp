//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstring>



int main()
{
    using namespace std;
    
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Enter name1: ";
    cin >> name1;
    
    cout << "name1: " << name1 << endl;
    cout << "name2: " << name2 << endl;
    cout << endl;
    
    cout << "name1 len: " << strlen(name1) << endl;
    cout << "name1 size: " << sizeof(name1) << endl;
    cout << endl;
    
    name2[3] = '\0';
    cout << "name2: " << name2 << endl;
    
    return 0;
}