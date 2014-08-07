//
//  ManyFriend.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef MANY_FRIEND_H_
#define MANY_FRIEND_H_

#include <iostream>

using std::cout;
using std::endl;



template <typename T>
class ManyFriend {
public:
    ManyFriend(const T &i): item(i) {}
    
    template <typename C, typename D> friend void show2(C &c, D &d);
    
private:
    T item;
};



template <typename C, typename D>
void show2(C &c, D &d) {
    cout << c.item << ", " << d.item << endl;
}

#endif
