//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "mytime.h"



int main(void) {
    using std::cout;
    using std::endl;
    
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planning time = ";
    planning.Show();
    cout << endl;
    
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;
    
    Time moreFixing(3, 28);
    cout << "more fixing time = ";
    moreFixing.Show();
    cout << endl;
    
    total = moreFixing.operator+(total);
    cout << "moreFixing.operator+(total) = ";
    total.Show();
    cout << endl;
    
    return 0;
}
