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



int main(void) {
    Brass piggy("Porcelot Pig", 381299, 4000.0);
    BrassPlus hoggy("Horatio Hog", 382288, 3000.0);
    
    piggy.ViewAcct();
    cout << endl;
    
    hoggy.ViewAcct();
    cout << endl;
    
    cout << "Depositing $1000 into the Hogg Account:\n";
    hoggy.Deposit(1000.0);
    cout << "New balance: $" << hoggy.Balance() << endl;
    
    cout << "Withdrawing $4200 from the Pig Account:\n";
    piggy.Withdraw(4200.0);
    cout << "Pig account balance: $" << piggy.Balance() << endl;
    
    cout << "Withdrawing $4200 from the Hog Account:\n";
    hoggy.Withdraw(4200.0);
    hoggy.ViewAcct();
    
    return 0;
}
