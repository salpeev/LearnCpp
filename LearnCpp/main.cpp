//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "ManyFriend.h"



int main() {
    ManyFriend<int> hfi1(10);
    ManyFriend<int> hfi2(10);
    ManyFriend<double> hfdb(10.5);
    
    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);
    
    cout << "hfdb, hfi2: ";
    show2(hfdb, hfi2);
    
    return 0;
}
