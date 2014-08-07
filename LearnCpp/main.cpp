//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "HasFriendT.h"



int main(void) {
    counts<int>();
    
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    
    report(hfi1);
    report(hfi2);
    report(hfdb);
    
    cout << "counts<int>() output: ";
    counts<int>();
    
    cout << "counts<double>() output: ";
    counts<double>();
    
    return 0;
}
