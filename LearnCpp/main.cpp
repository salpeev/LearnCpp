//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
#include "Stack.h"

using std::cin;
using std::cout;



int main(void) {
    Stack<std::string> st;
    char ch;
    std::string po;
    cout << "Cout please enter A to add a purchase order,\nP to process a PO, or Q to quit.\n";
    
    while (cin >> ch && std::toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        
        if (!std::isalpha(ch)) {
            cout << '\a';
            continue;
        }
        
        switch (ch) {
            case 'A':
            case 'a': {
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull()) {
                    cout << "stack already full\n";
                } else {
                    st.push(po);
                }
                break;
            }
            case 'P':
            case 'p': {
                if (st.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
            }
        }
        
        cout << "Cout please enter A to add a purchase order,\nP to process a PO, or Q to quit.\n";
    }
    
    return 0;
}
