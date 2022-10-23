//
// Created by Simohamed Kabbou on 23/10/2022.
//

#ifndef UNTITLED_MONTHCONVERTER_H
#define UNTITLED_MONTHCONVERTER_H

#include "illegalmonthexception.h"

class MonthConverter
{
public:
    static const char* convert(unsigned short);
private:
    static const char* month[];
};

#endif //UNTITLED_MONTHCONVERTER_H
