#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <array>
#include <utility>

template<typename T, std::size_t N>
std::pair<bool, std::size_t> recursive_binary_search(const std::array<T,N> & data, T key){

  return std::make_pair(false,0);
}

template<typename T, std::size_t N>
std::pair<bool, std::size_t> iterative_binary_search(const std::array<T,N> & data, T key){

  return std::make_pair(false,0);
}

#endif
