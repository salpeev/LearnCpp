//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using namespace std;
    
    cout << "Enter two integers: ";
    int a;
    int b;
    cin >> a >> b;
    
    cout << "The larger of " << a << " and " << b;
    int c = (a > b) ? a : b;
    cout << " is " << c << endl;
    
    return 0;
}