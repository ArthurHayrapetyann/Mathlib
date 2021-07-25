

#include "lib.hpp"




int gcd(int a, int b)//calculates the largest common divisor by the recursive function
{
        if (b == 0){
                return a;
        }else{
        return gcd(b, a % b);
        }

}
