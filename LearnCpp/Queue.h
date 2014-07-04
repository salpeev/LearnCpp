//
//  Queue.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef QUEUE_H_
#define QUEUE_H_



class Customer {
public:
    Customer() {arrive = processTime = 0;}
    void Set(long when);
    long When() const {return arrive;}
    int ProcessTime() const {return processTime;}
    
private:
    long arrive;
    int processTime;
};



typedef Customer Item;



class Queue {
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    
    bool IsEmpty() const;
    bool IsFull() const;
    int QueueCount() const;
    
    bool Enqueue(const Item &item);
    bool Dequeue(Item &item);
    
private:
    struct Node {Item item; struct Node *next;};
    
    enum {Q_SIZE = 10};
    
    Node *front;
    Node *rear;
    int items;
    const int qSize;
    
    Queue(const Queue &q): qSize(0) {}
    Queue & operator=(const Queue &q) {return *this;}
};

#endif
