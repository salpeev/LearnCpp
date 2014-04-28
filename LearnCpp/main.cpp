//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>



int main() {
    using std::cout;
    using std::endl;
    
    int a = 20;
    int b = 20;
    
    cout << "a   = " << a << "\tb   = " << b << endl;
    cout << "a++ = " << a++ << "\t++b = " << ++b << endl;
    cout << "a   = " << a << "\tb   = " << b << endl;
    
    return 0;
}