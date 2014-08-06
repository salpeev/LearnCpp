//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Crab.h"
#include "Stack.h"



int main(void) {
    using std::cout;
    using std::cin;
    using std::endl;
    
    Crab<Stack> nebula;
    
    int ni;
    double nb;
    
    cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
    
    while (cin >> ni >> nb && ni > 0 && nb > 0) {
        if (!nebula.push(ni, nb)) {
            break;
        }
    }
    
    while (nebula.pop(ni, nb)) {
        cout << ni << ", " << nb << endl;
    }
    
    return 0;
}
