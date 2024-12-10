#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Problematic code using std::vector<bool>
  std::vector<bool> boolVector = {true, false, true, true};
  std::vector<bool> boolVectorCopy(boolVector.size());

  std::copy(boolVector.begin(), boolVector.end(), boolVectorCopy.begin()); //This may not work as expected

  std::cout << "Original:";
  for (bool b : boolVector) std::cout << ' ' << b;
  std::cout << std::endl;
  std::cout << "Copy:";
  for (bool b : boolVectorCopy) std::cout << ' ' << b;
  std::cout << std::endl;

  // Solution: Use std::vector<char> or std::vector<uint8_t>
  std::vector<char> charVector = {1, 0, 1, 1}; //Representing boolean values
  std::vector<char> charVectorCopy(charVector.size());
  std::copy(charVector.begin(), charVector.end(), charVectorCopy.begin());

  std::cout << "Original (char):";
  for (char c : charVector) std::cout << ' ' << c;
  std::cout << std::endl;
  std::cout << "Copy (char):";
  for (char c : charVectorCopy) std::cout << ' ' << c;
  std::cout << std::endl;
  return 0;
}