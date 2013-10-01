//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <climits>



int main()
{
    using namespace std;
    
    cout << "\aOperation \"HyperHipe\" is now activated!\n";
    cout << "Enter your agent code: ________\b\b\b\b\b\b\b\b";
    
    long code;
    cin >> code;
    
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    
    return 0;
}