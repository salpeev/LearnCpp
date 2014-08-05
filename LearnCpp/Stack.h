//
//  Stack.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/5/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STACK_H_
#define STACK_H_

template <typename Type>
class Stack {
public:
    Stack();
    
    bool isempty() const;
    bool isfull() const;
    bool push(const Type &item);
    bool pop(Type &item);
    
private:
    enum {MAX = 10};
    Type items[MAX];
    int top;
};



template <typename Type>
Stack<Type>::Stack() {
    top = 0;
}

template <typename Type>
bool Stack<Type>::isempty() const {
    return top == 0;
}

template <typename Type>
bool Stack<Type>::isfull() const {
    return top == MAX;
}

template <typename Type>
bool Stack<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

template <typename Type>
bool Stack<Type>::pop(Type &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}

#endif
