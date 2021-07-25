

#include "lib.hpp"


void perfnum(int a){             //checks the perfection of the number
        int k = 0;
        for (int i=1; i<a; i++){ //calculates the sum of the divisors of a number
                if (a % i == 0){
                        k += i;
                }

        }
        if (k == a){ 
                cout << "perfect number" << endl;
	}
        else {
                cout << "is not a perfect number" << endl;
        }

}
