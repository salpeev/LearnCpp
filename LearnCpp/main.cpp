//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstring>



int main()
{
    using namespace std;
    
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;
    
    cout << animal << endl;
    cout << bird << endl;
    cout << endl;
    
    cout << "Enter an animal: ";
    cin >> animal;
    
    ps = animal;
    cout << ps << endl;
    cout << endl;
    
    cout << "Before strcpy(): " << endl;
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    cout << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    
    cout << "After strcpy(): " << endl;
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    cout << endl;
    
    delete [] ps;
    
    return 0;
}