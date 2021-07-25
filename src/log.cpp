

#include "lib.hpp"



double log(double b,double a){ //calculates the logarithm of b based on a

	assert(b>0 && b!=1);//check logarithm conditions
	assert(a>0);

	int sum, precision = 5;
	double result = 0;

	for(int i = 0; i < precision; i++){ //count logarithm 
		sum = 0;
		while( a >= b ){
			a /= b;
			sum++;
		}
		result += sum*pow(10, (-1)*i);
		a = pow(a,10);
	}
	return result;
	

}
