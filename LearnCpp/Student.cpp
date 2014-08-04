//
//  Student.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/1/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Student.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;



double Student::Average() const {
    if (ArrayDb::size() > 0) {
        return ArrayDb::sum() / ArrayDb::size();
    } else {
        return 0;
    }
}

const string & Student::Name() const {
    return (const string &)*this;
}

double & Student::operator[](int i) {
    return ArrayDb::operator[](i);
}

double Student::operator[](int i) const {
    return ArrayDb::operator[](i);
}

ostream & Student::array_out(ostream &os) const {
    int i;
    size_t lim = ArrayDb::size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4) {
                os << endl;
            }
        }
        
        if (i % 5 != 0) {
            os << endl;
        }
    } else {
        os << " empty array";
    }
    
    return os;
}

istream & operator>>(istream &is, Student &stu) {
    is >> (string &)stu;
    return is;
}

istream & getline(istream &is, Student &stu) {
    getline(is, (string &)stu);
    return is;
}

ostream & operator<<(ostream &os, const Student &stu) {
    os << "Scores for: " << (const string &)stu << ":\n";
    stu.array_out(os);
    return os;
}
