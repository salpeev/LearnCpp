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
    
    char ch;
    int count = 0;
    
    while (cin.get(ch)) {
        cout << ch;
        count++;
    }
    
    cout << endl << count << " characters read.\n";
    
    return 0;
}