//
//  Queue.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Queue.h"
#include <cstdlib>



void Customer::Set(long when) {
    processTime = std::rand() % 3 + 1;
    arrive = when;
}



Queue::Queue(int qs): qSize(qs) {
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue() {
    Node *temp;
    while (front) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::IsEmpty() const {
    return (items == 0);
}

bool Queue::IsFull() const {
    return items == qSize;
}

int Queue::QueueCount() const {
    return items;
}

bool Queue::Enqueue(const Item &item) {
    if (IsFull()) {
        return false;
    }
    
    Node *add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    
    if (front == nullptr) {
        front = add;
    } else {
        rear->next = add;
    }
    rear = add;
    
    return true;
}

bool Queue::Dequeue(Item &item) {
    if (front == nullptr) {
        return false;
    }
    
    item = front->item;
    items--;
    
    Node *temp = front;
    front = front->next;
    delete temp;
    
    if (items == 0) {
        rear = nullptr;
    }
    
    return true;
}

