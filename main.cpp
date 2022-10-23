#include <iostream>
#include "monthconverter.h"
#include "illegalmonthexception.h"

using namespace std;
int main (int argc, char * const argv[]) {
    unsigned short month;
    while(true)
    {
        try
        {
            cout << endl << "month to convert: ";
            cin >> month;
            cout << "-> " << MonthConverter::convert(month);
        }
        catch(const IllegalMonthException& e)
        {
            cout << endl << e;
        }
    }
    return 0; }
