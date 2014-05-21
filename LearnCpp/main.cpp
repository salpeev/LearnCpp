//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "stock00.h"



const int STKS = 4;



int main(void) {
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithik Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    
    std::cout << "Stock holdings:\n";
    for (int st = 0; st < STKS; st++) {
        stocks[st].show();
    }
    
    const Stock *top = &stocks[0];
    for (int st = 1; st < STKS; st++) {
        top = &top->topval(stocks[st]);
    }
    
    std::cout << "\nMost valuable holding:\n";
    top->show();
    
    return 0;
}
