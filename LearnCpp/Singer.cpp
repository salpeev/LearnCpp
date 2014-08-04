//
//  Singer.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Singer.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



const char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};



void Singer::Set() {
    Worker::Set();
    
    cout << "Enter number for singer's vocal range:\n";
    
    int i;
    for (i = 0; i < Vtypes; i++) {
        cout << i << ": " << pv[i] << "   ";
        if (i % 4 == 3) {
            cout << endl;
        }
    }
    
    if (i % 4 != 0) {
        cout << endl;
    }
    
    while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    }
    
    while (cin.get() != '\n') {
        continue;
    }
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Show();
    cout << "Vocal range: " << pv[voice] << endl;
}
