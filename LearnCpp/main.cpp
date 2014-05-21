//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cctype>
#include "stack.h"



int main(void) {
    using namespace std;
    
    Stack st;
    char ch;
    unsigned long po;
    
    cout << "Please enter A to add a purchase order,\nP to process a PO, or Q to quit.\n";
    
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        
        switch (ch) {
            case 'a':
            case 'A': {
                cout << "Enter a PO nubmer to add: ";
                cin >> po;
                if (st.isfull()) {
                    cout << "stack already full\n";
                } else {
                    st.push(po);
                }
                break;
            }
            case 'p':
            case 'P': {
                if (st.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
            }
        }
        
        cout << "Please enter A to add a purchase order,\nP to process a PO, or Q to quit.\n";
    }
    
    return 0;
}
