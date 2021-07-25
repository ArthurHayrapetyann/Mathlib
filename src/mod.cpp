

#include "lib.hpp"





void mod(int k){ //count mod any number
	int res;
	if(k < 0){
		res = (-1)*k; //takes the inverse of a number
		cout << "|" << k << "| = " << res;
	}else if(k >= 0){
		cout << "|" << k << "| = " << k; // if the number is greater than zero its modulus is equal to itself
	
	}

}
