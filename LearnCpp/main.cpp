//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstring>



char * getname(void);



int main()
{
    using namespace std;
    
    char *name;
    
    name = getname();
    cout << name << " at " << (int *)name << endl;
    cout << endl;
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *)name << endl;
    cout << endl;
    delete [] name;
    
    return 0;
}



char * getname(void)
{
    using namespace std;
    
    char tempName[80];
    cout << "Enter name: ";
    cin.getline(tempName, 80);
    
    char *pn = new char[strlen(tempName) + 1];
    strcpy(pn, tempName);
    
    return pn;
}