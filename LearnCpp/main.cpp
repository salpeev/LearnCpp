//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    
    cout << "Counting by " << by << "s:\n";
    
    for (int i = 0; i < 100; i = i + by) {
        cout << i << endl;
    }
    
    return 0;
}