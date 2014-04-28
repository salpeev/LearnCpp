//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



const int ArSize = 16;



int main() {
    using namespace std;
    
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    
    for (int i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i - 1];
    }
    
    for (int i = 0; i < ArSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }
    
    return 0;
}