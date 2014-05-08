//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



void cheers(int);
double cube(double x);



int main() {
    cheers(5);
    
    cout << "Give me a number: ";
    double side;
    cin >> side;
    
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of " << volume << " cubic feet.\n";
    
    cheers(cube(2));
    
    return 0;
}



void cheers(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x) {
    return x * x * x;
}
