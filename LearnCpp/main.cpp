//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "String.h"

using namespace std;



const int ArSize = 10;
const int MaxLen = 81;



int main(void) {
    String name;
    cout << "Hi, what's your name?\n";
    cin >> name;
    
    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n";
    
    String sayings[ArSize];
    char temp[MaxLen];
    
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n') {
            continue;
        }
        if (!cin || temp[0] == '\0') {
            break;
        } else {
            sayings[i] = temp;
        }
    }
    
    int total = i;
    
    if (total > 0) {
        cout << "Here are your sayings:\n";
        for (int i = 0; i < total; i++) {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }
        
        // Using pointers to keep track of shortest, first strings
        
        String *shortest = &sayings[0];
        String *first = &sayings[0];
        
        for (int i = 1; i < total; i++) {
            if (sayings[i].length() < shortest->length()) {
                shortest = &sayings[i];
            }
            if (sayings[i] < *first) {
                first = &sayings[i];
            }
        }
        
        cout << "Shortest saying:\n" << *shortest << endl;
        cout << "First aplhabetically:\n" << *first << endl;
        
        srand((unsigned int)time(nullptr));
        int choice = rand() % total;
        String *favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
    } else {
        cout << "No input.\n";
    }
    
    return 0;
}
