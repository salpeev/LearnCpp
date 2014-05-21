//
//  stack.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/21/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;



class Stack {
public:
    Stack();
    
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
    
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
};

#endif
