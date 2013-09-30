//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <climits>



int StoneToLb(int sts);



int main()
{
    using namespace std;
    
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long(LONG_MAX);
    long long n_llong(LONG_LONG_MAX);
    
    cout << "short width: " << sizeof(short) << endl;
    cout << "int width: " << sizeof(int) << endl;
    cout << "long width: " << sizeof(n_long) << endl;
    cout << "long long width: " << sizeof(n_llong) << endl;
    cout << endl;
    
    cout << "max short: " << n_short << endl;
    cout << "max int: " << n_int << endl;
    cout << "max long: " << n_long << endl;
    cout << "max long long: " << n_llong << endl;
    cout << endl;
    
    cout << "min int: " << INT_MIN << endl;
    cout << "bits per byte: " << CHAR_BIT << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}