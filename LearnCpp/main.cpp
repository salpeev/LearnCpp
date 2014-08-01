//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Student.h"

using std::cin;
using std::cout;
using std::endl;



void set(Student &sa, int n);



const int pupils = 3;
const int quizzes = 5;



int main(void) {
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    
    for (int i = 0; i < pupils; i++) {
        set(ada[i], quizzes);
    }
    
    cout << "\nStudent List:\n";
    for (int i = 0; i < pupils; i++) {
        cout << ada[i].Name() << endl;
    }
    
    cout << "\nResults:\n";
    for (int i = 0; i < pupils; i++) {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    
    return 0;
}



void set(Student &sa, int n) {
    cout << "Please enter the students name:\n";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++) {
        cin >> sa[i];
    }
    while (cin.get() != '\n') {
        continue;
    }
}
