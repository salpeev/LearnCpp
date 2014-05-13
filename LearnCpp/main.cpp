//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



double cube(double a);
double refcube(double &ra);



int main() {
    double x = 3.0;
    
    cout << cube(x) << " = cube of " << x << endl;
    cout << refcube(x) << " = cube of " << x << endl;
    
    return 0;
}



double cube(double a) {
    a *= a * a;
    return a;
}

double refcube(double &ra) {
    ra *= ra * ra;
    return ra;
}