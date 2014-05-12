//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <array>
#include <string>

using namespace std;



const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};



void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);



int main() {
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    
    return 0;
}



void fill(array<double, Seasons> *pa) {
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> da) {
    cout << "\nEXPENSES\n";
    
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    
    cout << "Total expenses: " << total << endl;
}