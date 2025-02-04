#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic use of std::vector<bool>
  std::vector<bool> boolVector(1000); 
  for (size_t i = 0; i < 1000; ++i) {
    boolVector[i] = (i % 2 == 0);
  }
  // Better alternative: std::bitset
  std::bitset<1000> boolBitset;
  for (size_t i = 0; i < 1000; ++i) {
    boolBitset[i] = (i % 2 == 0);
  }
  // Another alternative: std::vector<char> (one bit per char)
  std::vector<char> boolVectorChar(1000/8 + 1); // +1 for potential remaining bits 
  for (size_t i = 0; i < 1000; ++i) {
    boolVectorChar[i/8] |= ( (i % 2 == 0) << (i % 8) ); 
  }

  return 0;
}
