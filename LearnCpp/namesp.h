//
//  namesp.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/20/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#pragma mark
#include <string>



namespace pers {
    
    struct Person {
        std::string fname;
        std::string lname;
    };
    
    void getPerson(Person &);
    void showPerson(const Person &);
}



namespace debts {
    
    using namespace pers;
    
    struct Debt {
        Person name;
        double amount;
    };
    
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
}
