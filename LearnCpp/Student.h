//
//  Student.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/1/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include <valarray>


typedef std::valarray<double> ArrayDb;



class Student {
public:
    Student(): name("Null Student"), scores() {}
    explicit Student(const std::string &s): name(s), scores() {}
    explicit Student(int n): name("Nully"), scores(n) {}
    Student(const std::string &s, int n): name(s), scores(n) {}
    Student(const std::string &s, const ArrayDb &a): name(s), scores(a) {}
    Student(const char *str, const double *pd, int n): name(str), scores(pd, n) {}
    ~Student() {}
    
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    
    friend std::istream & operator>>(std::istream &is, Student &stu);
    friend std::istream & getline(std::istream &is, Student &stu);
    friend std::ostream & operator<<(std::ostream &os, const Student &stu);
    
private:
    std::ostream & array_out(std::ostream &os) const;
    
    std::string name;
    ArrayDb scores;
};


#endif
