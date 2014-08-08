//
//  Queue.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/8/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef QUEUE_H_
#define QUEUE_H_

template <class Item>
class Queue {
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    
    bool isempty() const {return items == 0;}
    bool isfull() const {return items == qsize;}
    int queuecount() const {return items;}
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
    
private:
    enum {Q_SIZE = 10};
    
    class Node {
    public:
        Node(const Item &i): item(i), next(nullptr) {}
        
        Item item;
        Node *next;
    };
    
    Queue(const Queue &q): qsize(0) {}
    
    Queue & operator=(const Queue &q) {return *this;}
    
    Node *front;
    Node *rear;
    int items;
    const int qsize;
};



template <class Item>
Queue<Item>::Queue(int qs): qsize(qs), front(nullptr), rear(nullptr), items(0) {
    
}

template <class Item>
Queue<Item>::~Queue() {
    Node *temp;
    while (front) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class Item>
bool Queue<Item>::enqueue(const Item &item) {
    if (isfull()) {
        return false;
    }
    
    Node *add = new Node(item);
    items++;
    
    if (!front) {
        front = add;
    } else {
        rear->next = add;
    }
    
    rear = add;
    
    return true;
}

template <class Item>
bool Queue<Item>::dequeue(Item &item) {
    if (front == 0) {
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

#endif
