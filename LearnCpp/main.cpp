//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    
    char ch;
    int spaces = 0;
    int total = 0;
    
    cin.get(ch);
    while (ch != '.') {
        if (ch == ' ') {
            spaces++;
        }
        total++;
        cin.get(ch);
    }
    
    cout << "Spaces: " << spaces << endl;
    cout << "Total: " << total << endl;
    
    return 0;
}