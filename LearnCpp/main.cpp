//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



const int ArSize = 80;



int main() {
    using namespace std;
    
    char line[ArSize];
    int spaces = 0;
    
    cout << "Enter a line of text: ";
    cin.get(line, ArSize);
    
    cout << "Complete line: " << line << endl;
    
    cout << "Line through first period: ";
    
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i];
        if (line[i] == '.') {
            break;
        }
        if (line[i] != ' ') {
            continue;
        }
        spaces++;
    }
    
    cout << "\n" << spaces << " spaces.\n";
    
    return 0;
}
