//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



double betsy(int lns);
double pam(int lns);
void estimate(int lines, double (*pf)(int));



void subdivide(char ar[], int low, int high, int level);



int main() {
    int code;
    
    cout << "How many lines of code do you need? ";
    cin >> code;
    
    cout << "Betsy:\n";
    estimate(code, betsy);
    
    cout << endl;
    cout << "Pam:\n";
    estimate(code, pam);
    
    return 0;
}



double betsy(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
    cout << lines << " will take " << pf(lines) << " hours.\n";
//    cout << lines << " will take " << (*pf)(lines) << " hours.\n";
}