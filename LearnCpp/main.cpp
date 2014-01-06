//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



union one4all
{
    int int_val;
    long long_val;
    double double_val;
};



int main()
{
    using namespace std;
    
    one4all pail;
    
    cout << "SIZE: " << sizeof(pail) << endl;
    
    pail.int_val = 15;
    
    cout << "INT: " << pail.int_val << endl;
    cout << "LONG: " << pail.long_val << endl;
    cout << "DOUBLE: " << pail.double_val << endl;
    cout << endl;
    
    pail.long_val = 15;
    
    cout << "INT: " << pail.int_val << endl;
    cout << "LONG: " << pail.long_val << endl;
    cout << "DOUBLE: " << pail.double_val << endl;
    cout << endl;
    
    pail.double_val = 15.0;
    
    cout << "INT: " << pail.int_val << endl;
    cout << "LONG: " << pail.long_val << endl;
    cout << "DOUBLE: " << pail.double_val << endl;
    cout << endl;
    
    return 0;
}