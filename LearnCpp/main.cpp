//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Brass.h"

using namespace std;

const int CLIENTS = 4;



int main(void) {
    Brass *p_clients[CLIENTS];
    
    string temp;
    long tempnum;
    double tempbal;
    char kind;
    
    for (int i = 0; i < CLIENTS; i++) {
        cout << "Enter clients name: ";
        getline(cin, temp);
        
        cout << "Enter clients account number: ";
        cin >> tempnum;
        
        cout << "Enter opening balance: $";
        cin >> tempbal;
        
        cout << "Enter 1 for Brass account or 2 for BrassPlus account: ";
        while (cin >> kind && (kind != '1' && kind != '2')) {
            cout << "Enter either 1 or 2: ";
        }
        
        if (kind == '1') {
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        } else {
            double tmax;
            double trate;
            
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            
            cout << "Enter the interest rate as a decimal function: ";
            cin >> trate;
            
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        
        while (cin.get() != '\n') {
            continue;
        }
    }
    
    cout << endl;
    
    for (int i = 0; i < CLIENTS; i++) {
        p_clients[i]->ViewAcct();
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i++) {
        delete p_clients[i];
    }
    
    return 0;
}
