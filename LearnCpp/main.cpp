//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Array.h"



int main(void) {
    using std::cout;
    using std::endl;
    
    Array<int, 10> sums;
    Array<double, 10> aves;
    Array<Array<int, 5>, 10> twodee;
    
    for (int i = 0; i < 10; i++) {
        sums[i] = 0;
        
        for (int j = 0; j < 5; j++) {
            twodee[i][j] = (i + 1) * (j + 1);
            sums[i] += twodee[i][j];
        }
        
        aves[i] = (double)sums[i] / 10;
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            cout.width(2);
            cout << twodee[i][j] << ' ';
        }
        cout << ": sum = ";
        cout.width(3);
        cout << sums[i] << ", average = " << aves[i] << endl;
    }
    
    return 0;
}
