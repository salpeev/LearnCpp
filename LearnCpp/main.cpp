//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



const int Lim = 8;



template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);

void Show(int a[]);


int main() {
    int i = 10;
    int j = 20;
    
    cout << "i, j = " << i << ", " << j << ".\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";
    cout << endl;
    
    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    
    Swap(d1, d2, Lim);
    
    cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);
    
    return 0;
}



template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n) {
    for (int i = 0; i < n; i++) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[]) {
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++) {
        cout << a[i];
    }
    cout << endl;
}

