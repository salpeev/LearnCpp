//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "HasFriend.h"



int main(void) {
    cout << "No objects declared:\n";
    counts();
    
    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared:\n";
    counts();
    
    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared:\n";
    counts();
    
    HasFriend<double> hfd1(10.5);
    cout << "After hfd1 declared:\n";
    counts();
    
    reports(hfi1);
    reports(hfi2);
    reports(hfd1);
    
    return 0;
}
