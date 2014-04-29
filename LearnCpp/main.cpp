//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    char ch;
    
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    
    while (ch != '.') {
        if (ch == '\n') {
            std::cout << ch;
        } else {
            std::cout << ++ch;
        }
        std::cin.get(ch);
    }
    
    std::cout << "\nPlease excuse the slight confusion.\n";
    
    return 0;
}