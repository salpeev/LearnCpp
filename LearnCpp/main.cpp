//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "coordin.h"

using namespace std;



int main() {
    rect rplace;
    
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        polar pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    
    return 0;
}

