//
// Created by Simohamed Kabbou on 23/10/2022.
//

#ifndef UNTITLED_ILLEGALMONTHEXCEPTION_H
#define UNTITLED_ILLEGALMONTHEXCEPTION_H

#include "Base.h"
#include "Base.h"
#include <string>

class IllegalMonthException : public Base {
public:
    IllegalMonthException(unsigned char);

    virtual std::ostream &printOn(std::ostream &) const;

private:
    const unsigned short illegalMonth;
};
#endif //UNTITLED_ILLEGALMONTHEXCEPTION_H
