//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Waiter.h"
#include "Singer.h"



const int LIM = 4;



int main(void) {
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Beverly Hills", 522L, 3);
    Waiter w_temp;
    Singer s_temp;
    
    Worker *pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
    
    for (int i = 2; i < LIM; i++) {
        pw[i]->Set();
    }
    
    for (int i = 0; i < LIM; i++) {
        pw[i]->Show();
        std::cout << std::endl;
    }
    
    return 0;
}
