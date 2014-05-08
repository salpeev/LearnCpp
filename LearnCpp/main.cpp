//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



const int Max = 5;



int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);



int main() {
    double properties[Max];
    
    int size = fill_array(properties, Max);
    show_array(properties, size);
    
    if (size > 0) {
        cout << "Enter reevaluation factor: ";
        double factor;
        
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    
    return 0;
}



int fill_array(double arr[], int limit) {
    double temp;
    int i;
    
    for (i = 0; i < limit; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input. Process terminated.\n";
            break;
        } else if (temp < 0) {
            break;
        }
        
        arr[i] = temp;
    }
    
    return i;
}

void show_array(const double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Property #" << (i + 1) << ": $" << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= r;
    }
}