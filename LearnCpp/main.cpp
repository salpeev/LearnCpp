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
    
    cout << "Enter the starting countdown value: ";
    
    int limit;
    cin >> limit;
    
    int i;
    for (i = limit; i; i--) {
        cout << "i: " << i << endl;
    }
    cout << "Now i: " << i << endl;
    
    return 0;
}