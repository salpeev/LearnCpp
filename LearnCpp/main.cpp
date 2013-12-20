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
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    float a = 2.34E+22f;
    float b = a + 1.0f;
    
    cout << "a = " << a << endl;
    cout << "(b - a) = " << (b - a) << endl;
    
    return 0;
}