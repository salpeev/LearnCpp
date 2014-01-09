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
    
    cout << wages << endl;
    cout << &wages << endl;
    
    cout << "wages: " << wages << "\t(wages + 1): " << (wages + 1) << endl;         // + sizeof(double) bytes
    cout << "&wages: " << &wages << "\t(&wages + 1): " << (&wages + 1) << endl;     // + (sizeof(double) * 3) bytes
    
    return 0;
}