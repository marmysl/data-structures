#ifndef BITSET_HPP
#define BITSET_HPP
#include <iostream>

class Bitset{
public:

  // default constructor
  Bitset();

  // constrtuctor when given size of bit array
  Bitset(intmax_t size);

  // given string of a bitset !!
  Bitset(const std::string & value);

  // destructor !!
  ~Bitset();

  Bitset(const Bitset & ) = delete;
  
  Bitset & operator=(const Bitset &) = delete;

  // return size function
  intmax_t size() const;

  // function checks bit set validity
  bool good() const;

  // function sets specified bit to 1 
  void set(intmax_t index);

  // function sets specified bit to 0
  void reset(intmax_t index);

  // toggle
  void toggle(intmax_t index);

  // test cases !!
  bool test(intmax_t index);

  // change to string !!
  std::string asString() const;

private:
	intmax_t len; // size value
	bool * arr; // bit array pointer
  
};

#endif
