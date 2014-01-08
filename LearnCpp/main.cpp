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
    
    int donuts = 6;
    double cups = 4.5;
    
    cout << &donuts << "\t" << donuts << endl;
    cout << &cups << "\t" << cups << endl;
    
    return 0;
}