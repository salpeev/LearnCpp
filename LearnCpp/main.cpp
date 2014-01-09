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
    
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    
    cout << "p3[1]: " << p3[1] << endl;
    cout << endl;
    
    p3 = p3 + 1;
    cout << "p3[0]: " << p3[0] << endl;
    cout << "p3[1]: " << p3[1] << endl;
    cout << endl;
    
    p3 = p3 - 1;
    cout << "p3[0]: " << p3[0] << endl;
    
    delete [] p3;
    
    return 0;
}