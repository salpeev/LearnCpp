//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstring>



int main() {
    using namespace std;
    
    char word[5] = "?ate";
    
    for (char ch = 'a'; strcmp(word, "mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "END: " << word << endl;
    
    return 0;
}