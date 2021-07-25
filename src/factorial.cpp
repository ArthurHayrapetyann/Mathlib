

#include "lib.hpp"




int factorial(int n){ //count factorial any number 
        
        if(n<=0){     // 0! = 1
        return 1;
        }
        int res = 1;
        for(int i = 1; i<=n; i++){ //the product of all numbers from one to n
        res = res*i;
        } 
	cout << n <<"! = " << res; //print result
        return 0;

}
