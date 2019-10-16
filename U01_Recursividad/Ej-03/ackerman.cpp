#include "ackerman.h"


unsigned int ackerman(unsigned int m, unsigned int n) {
    if (m == 0)
        return n + 1;
    else
        if (m > 0 && n == 0)
            ackerman(m-1,1);
        else
            ackerman(m-1,ackerman(m,n-1));
}