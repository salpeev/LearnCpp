//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main()
{
    using namespace std;
    
    int updates = 6;
    int *p_updates = &updates;
    
    cout << "updates: " << updates << endl;
    cout << "*p_updates: " << *p_updates << endl;
    cout << endl;
    
    cout << "&updates: " << &updates << endl;
    cout << "p_updates: " << p_updates << endl;
    cout << endl;
    
    *p_updates = *p_updates + 1;
    cout << "updates: " << updates << endl;
    
    return 0;
}