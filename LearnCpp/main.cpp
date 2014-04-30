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
    
    cout << "Format your hard disk? (y/n): ";
    
    char ch;
    cin >> ch;
    
    if (ch == 'y' || ch == 'Y') {
        cout << "You were warned!" << endl;
    } else if (ch == 'n' || ch == 'N') {
        cout << "A wise choice." << endl;
    } else {
        cout << "Wrong input." << endl;
    }
    
    return 0;
}