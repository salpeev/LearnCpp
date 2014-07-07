//
//  tabtenn.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef TABTENN_H_
#define TABTENN_H_

#include <string>

using std::string;



class TableTennisPlayer {
public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);
    
    void Name() const;
    bool HasTable() const {return hasTable;}
    void ResetTable(bool v) {hasTable = v;}
    
private:
    string firstname;
    string lastname;
    bool hasTable;
};



class RatedPlayer: public TableTennisPlayer {
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
    
    unsigned int Rating() const {return rating;}
    void ResetRating(unsigned int r) {rating = r;}
    
private:
    unsigned int rating;
};

#endif
