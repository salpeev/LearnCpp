//
//  stack.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/21/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "stack.h"



Stack::Stack() {
    top = 0;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == MAX;
}

bool Stack::push(const Item &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}
