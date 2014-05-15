//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



struct debts {
    char name[50];
    double amount;
};



template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T *arr[], int n);



int main() {
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    
    double *pd[3];
    
    // Set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++) {
        pd[i] = &mr_E[i].amount;
    }
    
    cout << "Listing Mr. E's counts of things:\n";
    ShowArray(things, 6);
    cout << endl;
    
    cout << "Listing Mr. E's debts:\n";
    ShowArray(pd, 3);
    cout << endl;
    
    return 0;
}



template <typename T>
void ShowArray(T arr[], int n) {
    cout << "Template A: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n) {
    cout << "Template B: ";
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << ' ';
    }
    cout << endl;
}
