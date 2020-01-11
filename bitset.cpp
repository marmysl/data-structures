#include "bitset.hpp"
#include <cstdint>

Bitset :: Bitset() {
	// Defines size variable
	intmax_t len = 8;
	
	// dynamically allocate boolean array with size 8
	bool * arr = new bool [len];
	
	// fill with 0s
	for (intmax_t i = 0; i < len; i++)
		*(arr + i) = 0;	 
}
 
Bitset :: Bitset(intmax_t len) { 
	// Check that size is valid and exit if not
	 if (len <= 0) {
		 exit(-1);
	} else {
		// given valid size value, dynamically allocate array of booleans with given size
		bool * arr = new bool [len];
		
		// fill with 0s
		for (intmax_t i = 0; i < len; i++)
		*(arr + i) = 0;
	}
}

Bitset:: ~Bitset() {
	// delete dynamically allocated arrays
	delete [] arr;
}
 
Bitset:: Bitset(const std::string & s) {
	 // initialized string with the form 00010000
	 //s = "00010000";
}

intmax_t Bitset::size() const {
	// Return size of bitset
	return len; 
}

bool Bitset::good() const {
	// check for any number that is not a 1 or 0
	for (intmax_t i = 0; i < len; i++) {
		if (*(arr + i) != 0 && *(arr + i) != 1) {
			return false; }
	}

	return true;		
}

void Bitset::set(intmax_t index) {
	// check if index is valid
	if (index > len -1 || index < 0) {
		exit(-1); }	
	// set value of boolean at specified index to 1
	arr[index] = 1;	
}

 void Bitset::reset(intmax_t index) {
	// check if index is valid
	if (index > len -1 || index < 0) {
		exit(-1); }	
	// set value of boolean at specified index to 0
	arr[index] = 0;	
}

 void Bitset::toggle(intmax_t index) {
	// ensure given index is within array
	if (index > len -1 || index < 0) {
		exit(-1); }	
	
	// toggle value accordingly
	arr[index] = arr[index] ? 0 : 1; 
}

// test if nth bit is set by returning bool of true, false if not, 
// if not in array it's invalid and returns false
bool Bitset::test(intmax_t index) {
	// check if index is valid
	if (index > len -1 || index < 0)
		return false;		
	// check if bit is set
	else if (arr[index] & (1 << (index - 1)))
		return true;
	else
		return false;
}

// return bitset as string
std::string Bitset:: asString() const {
	std::string s = "";
	
	// use for loop to put each 
	for (intmax_t i = 0; i < len; i++) {
		s = s + std::to_string(arr[i]);
	}
	
	return s;
}
