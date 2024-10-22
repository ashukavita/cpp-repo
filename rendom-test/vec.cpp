#include <iostream>
#include <vector>
#include <fstream>  // For file handling

int main() {
    // Declare a 2D vector
    std::vector<std::vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Open a file in write mode
    std::ofstream outfile("output.txt");

    // Check if file is open
    if (!outfile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Iterate over the 2D vector and write its contents to the file
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            outfile << elem << " ";  // Write element followed by space
        }
        outfile << "\n";  // Write a newline after each row
    }

    // Close the file
    outfile.close();

    std::cout << "Vector written to output.txt" << std::endl;
    return 0;
}
