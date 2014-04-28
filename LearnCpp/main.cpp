//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using namespace std;
    
    int quizScores[] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    
    cout << "Doing it right:" << endl;
    for (int i = 0; quizScores[i] == 20; i++) {
        cout << "Quiz " << i << " is a 20." << endl;
    }
    
    cout << "Doing it dangerously wrong:" << endl;
    for (int i = 0; quizScores[i] = 20; i++) {
        cout << "Quiz " << i << " is a 20." << endl;
    }
    
    return 0;
}