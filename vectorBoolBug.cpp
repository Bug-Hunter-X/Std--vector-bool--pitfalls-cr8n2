std::vector<bool> is not the same as a vector of bits. It's implemented as a bitset, which can lead to performance issues and unexpected behavior compared to a typical vector.  For example, accessing elements might not be as efficient, and iterators behave differently.