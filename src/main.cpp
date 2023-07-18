#include <iostream>

using namespace std;

// Creating summation function to calculate the 
// verify digit

int summation(long long registration, int digit, 
int multiplier, int qtydigits) {
	
	int sum = 0;
		
	while(registration > 0) {
		
		digit = registration % 10;
		registration /= 10;
			
		if(multiplier > 9) {
			multiplier = 2;
		}
		sum += (digit * multiplier);
		multiplier++;
	}
	return sum;
}

int main() {
	
	long long registration;
	int digit, digit_1, digit_2;
	int qtydigits, sum, multiplier;
	int rest, result, VerifyDigit_1;
	
	cout << "\n";	
	cout << "Enter a state registration: ";
	cin >> registration;
	
	qtydigits = 0;
	
	// Getting the two last digits
	while(qtydigits < 2) {
		digit = registration % 10;
		registration /= 10;
		if(qtydigits == 0) {
			digit_2  = digit;
		}
		else if(qtydigits == 1) {
			digit_1 = digit;
		}
		
		qtydigits++;
	}
	
	qtydigits = 0;
	sum = 0;
	multiplier = 2;
	
	// Calculating the first verify digit
	
	sum = summation(registration, digit, multiplier, 
	qtydigits);
	
	rest = sum % 11;
	result = 11 - rest;
	
	if(result == 10 || result == 11) {
		VerifyDigit_1 = 0;
	}
	else {
		VerifyDigit_1 = result;
	}
	
	return 0;
}