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
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;
    
    cout << "&nights: " << &nights << "\t\tnights: " << nights << endl;
    cout << "pt: "<< pt << "\t\t\t\t*pt: " << *pt << endl;
    cout << endl;
    
    double *pd = new double;
    *pd = 10000001.0;
    
    cout << "pd: " << pd << "\t\t\t\t*pd: " << *pd << endl;
    cout << endl;
    
    cout << "sizeof(pt): " << sizeof(pt) << "\t\tsizeof(*pt)" << sizeof(*pt) << endl;
    cout << "sizeof(pd): " << sizeof(pd) << "\t\tsizeof(*pd)" << sizeof(*pd) << endl;
    
    delete pt;
    delete pd;
    
    return 0;
}