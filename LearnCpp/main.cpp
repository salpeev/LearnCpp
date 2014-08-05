//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "SingingWaiter.h"

using std::cin;
using std::cout;
using std::endl;
using std::strchr;



const int SIZE = 5;



int main(void) {
    Worker *lolas[SIZE];
    
    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\nw: waiter   s: singer   t: singing waiter   q: quit\n";
        cin >> choice;
        
        while (strchr("wstq", choice) == nullptr) {
            cout << "Please enter a w, s, t or q: ";
            cin >> choice;
        }
        
        if (choice == 'q') {
            break;
        }
        
        switch (choice) {
            case 'w': {
                lolas[ct] = new Waiter;
                break;
            }
            case 's': {
                lolas[ct] = new Singer;
                break;
            }
            case 't': {
                lolas[ct] = new SingingWaiter;
                break;
            }
        }
        
        cin.get();
        lolas[ct]->Set();
    }
    
    cout << "\nHere is your staff:\n";
    for (int i = 0; i < ct; i++) {
        cout << endl;
        lolas[i]->Show();
    }
    
    for (int i = 0; i < ct; i++) {
        delete lolas[i];
    }
    
    return 0;
}
