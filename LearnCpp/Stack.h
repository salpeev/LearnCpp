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
    explicit Stack(int ss = SIZE);
    Stack(const Stack &st);
    ~Stack() {delete items;}
    
    bool isempty() const;
    bool isfull() const;
    bool push(const Type &item);
    bool pop(Type &item);
    
    Stack & operator=(const Stack &st);
    
private:
    enum {SIZE = 10};
    int stacksize;
    Type *items;
    int top;
};



template <typename Type>
Stack<Type>::Stack(int ss): stacksize(ss), top(0) {
    items = new Type[stacksize];
}

template <typename Type>
Stack<Type>::Stack(const Stack &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];
    for (int i = 0; i < stacksize; i++) {
        items[i] = st.items[i];
    }
}

template <typename Type>
bool Stack<Type>::isempty() const {
    return top == 0;
}

template <typename Type>
bool Stack<Type>::isfull() const {
    return top == SIZE;
}

template <typename Type>
bool Stack<Type>::push(const Type &item) {
    if (top < stacksize) {
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

template <typename Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> &st) {
    if (this == &st) {
        return *this;
    }
    
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];
    for (int i = 0; i < stacksize; i++) {
        items[i] = st.items[i];
    }
    
    return *this;
}

#endif
