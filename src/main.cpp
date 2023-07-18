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
	return 0;
}