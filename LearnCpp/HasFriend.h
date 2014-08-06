//
//  HasFriend.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/6/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef HAS_FRIEND_H_
#define HAS_FRIEND_H_

#include <iostream>

using std::cin;
using std::cout;
using std::endl;



template <typename T>
class HasFriend {
public:
    HasFriend(const T &i): item(i) {ct++;}
    ~HasFriend() {ct--;}
    
    friend void counts();
    friend void reports(HasFriend<T> &hf);
    
private:
    T item;
    static int ct;
};



template <typename T>
int HasFriend<T>::ct = 0;



void counts() {
    cout << "int count: " << HasFriend<int>::ct << endl;
    cout << "double count: " << HasFriend<double>::ct << endl;
    cout << endl;
}

void reports(HasFriend<int> &hf) {
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> &hf) {
    cout << "HasFriend<double>: " << hf.item << endl;
}

#endif