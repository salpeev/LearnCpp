//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main()
{
    using namespace std;
    
    int auks, bats, coots;
    
    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;     // Old C syntax
    coots = int(19.99) + int(11.99);    // New C++ syntax
    
    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for Z: " << int(ch) << endl;
    cout << "The code for Z: " << static_cast<int>(ch) << endl;
    
    return 0;
}