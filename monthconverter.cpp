//
// Created by Simohamed Kabbou on 23/10/2022.
//
#include "monthconverter.h"
const char*
        MonthConverter::month[]={"","january","february"
                ,"march","april","may","june","july","aout","september","october","november","december"};
                const char* MonthConverter::convert(unsigned
                short m)
                {
                    if(m<1 || m>12)
                        throw IllegalMonthException(m);
                    return month[m];
                }