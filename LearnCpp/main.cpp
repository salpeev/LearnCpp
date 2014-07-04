//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Queue.h"

using namespace std;



const int MIN_PER_HOUR = 60;



bool newcustomer(double x);



int main(void) {
    srand((unsigned int)time(nullptr));
    
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    
    Queue line(qs);
    
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    
    long cyclelimit = MIN_PER_HOUR * hours;
    
    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    
    double min_per_cust = MIN_PER_HOUR / perhour;
    
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    
    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (line.IsFull()) {
                turnaways++;
            } else {
                customers++;
                temp.Set(cycle);
                line.Enqueue(temp);
            }
        }
        
        if (wait_time <= 0 && !line.IsEmpty()) {
            line.Dequeue(temp);
            wait_time = temp.ProcessTime();
            line_wait += cycle - temp.When();
            served++;
        }
        
        if (wait_time > 0) {
            wait_time--;
        }
        
        sum_line += line.QueueCount();
    }
    
    if (customers > 0) {
        cout << "Customers accepted: " << customers << endl;
        cout << "Customers served: " << served << endl;
        cout << "Turnaways: " << turnaways << endl;
        cout << "Average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)sum_line / cyclelimit << endl;
        cout << "Average wait time: ";
        cout << (double)line_wait / served;
    } else {
        cout << "No customers!";
    }
    
    return 0;
}



bool newcustomer(double x) {
    return (rand() * x / RAND_MAX < 1);
}