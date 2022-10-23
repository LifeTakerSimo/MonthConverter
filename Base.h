//
// Created by Simohamed Kabbou on 23/10/2022.
//

#ifndef UNTITLED_BASE_H
#define UNTITLED_BASE_H

#include<iostream>


class Base {
public:
    virtual std::ostream& printOn(std::ostream&) const =0 ;
    friend std::ostream& operator << (std::ostream&, const Base&);

};


#endif //UNTITLED_BASE_H
