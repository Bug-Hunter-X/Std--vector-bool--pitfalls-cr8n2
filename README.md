This repository demonstrates a common C++ error involving `std::vector<bool>`.  The standard library's implementation isn't a true vector of bits, leading to performance problems and surprising results. The example shows how to use `std::vector<bool>` and an alternative using `std::bitset` or `std::vector<char>` for better performance.