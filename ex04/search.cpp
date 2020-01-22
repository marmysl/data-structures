#include "search.hpp"

#include <iostream>
using namespace std;

// Egyptian Powers

/* The relationship:
 * For even values of n: x^n = x^2 (n/2)
 * For odd values of n: x^n = x * x^2 (n-1/2)
 */
 
int fancyPower(int n, int m) {
	
	// Base case
	if (n  == 0) 
		return 1;
		
	if (n == 1) 
		return m;	

	// Conditions
	if (n%2 == 0) { // if n is even
		return fancyPower(n/2, m*m);
		
	} else { // if n is odd
		return m * fancyPower((n-1)/2, m*m);
	}
		
}

//Recursive Binary Search - write, comment, pass all given tests
int find( int a[], int lwr, int upr, int val) {
	
	// Find midpoint
	int mid = (lwr + upr)/2;
	
	// given sorted integer array of size n
	// return index of first position matching val
	// If the value is indexed at this point
	if (a[mid] == val) {
		return mid; }
		
	// Search 
	if (a[mid] < val) {
		return find(a, lwr, mid, val); 
	}
	else {
		return find(a, mid +1, upr, val);
	}
	
	// -1 if not in array
	return -1;		
}

int main () {
	
	int b[10] = {0,1,2,3,4,5,6,7,8,9};
	
	int hi = find(b, 0, 9, 4);
	
	cout << hi;
	
	return 0;
}
