
#include "lib.hpp"

double sqrt(int n) //count matematical root any number
{
    float temp = 0, sqrt = 0;
    sqrt = n / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( n/temp + temp) / 2;
    }

    return sqrt;
}
