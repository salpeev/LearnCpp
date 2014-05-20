//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "namesp.h"



void other(void);
void another(void);



int main(void) {
    using debts::Debt;
    using debts::showDebt;
    
    Debt golf = {{"Debby", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    
    return 0;
}



void other(void) {
    using std::cout;
    using std::endl;
    using namespace debts;
    
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    
    Debt zippy[3];
    for (int i = 0; i < 3; i++) {
        getDebt(zippy[i]);
    }
    for (int i = 0; i < 3; i++) {
        showDebt(zippy[i]);
    }
    cout << "Total debt: " << sumDebts(zippy, 3) << endl;
    
    return;
}

void another(void) {
    using pers::Person;
    
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector); // ???
    std::cout << std::endl;
}