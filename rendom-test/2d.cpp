#include <iostream>
#include <vector>
#include <fstream>  // For file handling

int main() {
    // Create three vectors of different types
    std::vector<int> intVec = {1, 2, 3};
    std::vector<float> floatVec = {7.5f, 5.1f, 6.2f};
    std::vector<char> charVec = {'a', 'b', 'c'};

    // Create a 2D vector of void* to hold the addresses of the three vectors
    std::vector<std::vector<void*>> vec2D = {
        std::vector<void*>(intVec.size()),  // Create a vector for integers
        std::vector<void*>(floatVec.size()),  // Create a vector for floats
        std::vector<void*>(charVec.size())  // Create a vector for chars
    };

    // Populate the 2D vector with the addresses of the elements in each vector
    for (size_t i = 0; i < intVec.size(); ++i) {
        vec2D[0][i] = &intVec[i];  // Address of integers
    }
    for (size_t i = 0; i < floatVec.size(); ++i) {
        vec2D[1][i] = &floatVec[i];  // Address of floats
    }
    for (size_t i = 0; i < charVec.size(); ++i) {
        vec2D[2][i] = &charVec[i];  // Address of chars
    }

    // Open a file in write mode
    std::ofstream outfile("2doutput.txt");

    // Check if file is open
    if (!outfile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Write the contents of the 2D void* array to the file
    // First row (integers)
    for (size_t i = 0; i < intVec.size(); ++i) {
        outfile << *static_cast<int*>(vec2D[0][i]) << " ";  // Dereference and cast void* back to int*
    }
    outfile << "\n";  // Newline after the first row

    // Second row (floats)
    for (size_t i = 0; i < floatVec.size(); ++i) {
        outfile << *static_cast<float*>(vec2D[1][i]) << " ";  // Dereference and cast void* back to float*
    }
    outfile << "\n";  // Newline after the second row

    // Third row (chars)
    for (size_t i = 0; i < charVec.size(); ++i) {
        outfile << *static_cast<char*>(vec2D[2][i]) << " ";  // Dereference and cast void* back to char*
    }
    outfile << "\n";  // Newline after the third row

    // Close the file
    outfile.close();

    std::cout << "Vector contents written to output.txt" << std::endl;

    return 0;
}
