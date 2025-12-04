/*3. Vector of Pairs – Sort by Second Value 
You are given N pairs (a, b). 
Sort the vector of pairs in ascending order of b, and if ties occur, sort by a. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

// Function to sort a vector of pairs based on the second value, 
// and if ties occur, sort by the first value
void sortVectorOfPairs(std::vector<std::pair<int, int>>& vec) {
    // Use std::sort with a custom comparator
    std::sort(vec.begin(), vec.end(), 
              [](const auto& x, const auto& y) {
                  // Compare pairs based on second value, then first value
                  return std::tie(x.second, x.first) < std::tie(y.second, y.first);
              });
}

// Example usage
int main() {
    // Create a vector of pairs
    std::vector<std::pair<int, int>> vec = {{3, 2}, {1, 1}, {2, 2}, {1, 2}};

    // Sort the vector
    sortVectorOfPairs(vec);

    // Print the sorted vector
    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}
