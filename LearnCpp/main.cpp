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
    
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    
    double *pw = wages;
    short *ps = &stacks[0];
    
    cout << "pw: " << pw << "\t*pw: " << *pw << endl;
    pw++;
    cout << "pw: " << pw << "\t*pw: " << *pw << endl;
    cout << endl;
    
    cout << "ps: " << ps << "\t*ps: " << *ps << endl;
    ps++;
    cout << "ps: " << ps << "\t*ps: " << *ps << endl;
    cout << endl;
    
    cout << "stacks[0]: " << stacks[0] << "\tstacks[1]: " << stacks[1] << endl;
    cout << "*stacks: " << *stacks << "\t*(stacks + 1): " << *(stacks + 1) << endl;
    cout << endl;
    
    cout << "sizeof(wages): " << sizeof(wages) << endl;
    cout << "sizeof(pw): " << sizeof(pw) << endl;
    
    return 0;
}