//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {
    int a = 5;
    int b = 10;
    
    int *pA = &a;
    int *pB = &b;
    
    int **ppA = &pA;
    *ppA = pB;
    
    cout << *pA << endl;
    
    return 0;
}