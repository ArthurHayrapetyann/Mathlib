
#include "lib.hpp"
int main(){           //checks the entered word and calls the corresponding function
	string mathop;
	int arg1;
	int arg2;
	double argum1;
	double argum2;
	cout << "mathmatical operacion  <perfnum>, <gcd>, <mod>, <sqrt>, <factorial>, <log> " << endl;
	cin >> mathop;
	if(mathop == "perfnum"){
		cout << "NUMBER" << endl;
		cin >> arg1;
		perfnum(arg1);
	}
	else if(mathop == "gcd"){
		cout << "NUMBER 1" << endl;
		cin >> arg1;
		cout << "NUMBER 2" << endl;
		cin >> arg2;
		cout << gcd(arg1 , arg2);
	}
	else if(mathop == "mod"){
		cout << "NUMBER" << endl;
		cin >> arg1;
		mod(arg1);
	}
	else if(mathop == "sqrt"){
		cout << "NUMBER" << endl;
		cin >> arg1;
		cout << sqrt(arg1);
	}
	else if(mathop == "factorial"){
		cout << "NUMBER" << endl;
		cin >> arg1;
		factorial(arg1);

	}
	else if(mathop == "log"){
		cout << "NUMBER 1" << endl;
		cin >> argum1;
		cout << "NUMBER 2" << endl;
		cin >> argum2;
	       	cout << log(argum1,argum2);
	
	}
	else{
		cout << "dont have this mathematical operation in this libarery" << endl;
	}


	
		
}
