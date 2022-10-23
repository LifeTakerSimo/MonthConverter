//
// Created by Simohamed Kabbou on 23/10/2022.
//

#include "Base.h"

std::ostream& operator << (std::ostream& os, const Base& o) {
    return o.printOn(os);
}