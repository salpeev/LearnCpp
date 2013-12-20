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
    
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;
    
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    
    return 0;
}