//
// Created by Simohamed Kabbou on 23/10/2022.
//

#include "illegalmonthexception.h"

IllegalMonthException::IllegalMonthException(unsigned char m):
        illegalMonth(m)
{}
std::ostream& IllegalMonthException::printOn(std::ostream& os)
const
{
    return os << "illegal month: "<< illegalMonth;
}