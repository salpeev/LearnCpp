//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



typedef const double * (*p_fun)(const double *, int);



const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);



int main() {
    double av[3] = {1112.3, 1542.6, 2227.9};
    
    // Pointer to a function
    p_fun p1 = f1;
    auto p2 = f2;   // C++11 automatic type deduction
    
    cout << "Using pointers to a functions:\n";
    cout << "Address         Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
    
    // pa an array of pointers
    // auto doesn't work with list initialization
    p_fun pa[3] = {f1, f2, f3};
    // but it does for for initializing to a single value
    // pb a pointer to first element of pa
    auto pb = pa;
    // Or pre-C++11:
//    const double * (**pb)(const double *, int) = pa;
    
    cout << "\nUsing an array of pointers to functions:\n";
    cout << "Address         Value\n";
    for (int i = 0; i < 3; i++) {
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    }
    
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << "Address         Value\n";
    for (int i = 0; i < 3; i++) {
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    }
    
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << "Address         Value\n";
    // easy way to declare pc
//    auto pc = &pa;
    // Or pre-C++11
    const double * (*(*pc)[3])(const double *, int) = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    
    // hard way to declare pd
    p_fun (*pd)[3] = &pa;
    // store return value in pdb
    const double *pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    // alternative notation
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    
    return 0;
}



const double * f1(const double *ar, int n) {
    return ar;
}

const double * f2(const double ar[], int n) {
    return (ar + 1);
}

const double * f3(const double ar[], int n) {
    return (ar + 2);
}