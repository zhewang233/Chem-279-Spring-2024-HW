#include <armadillo>

int main() {
    arma::mat A = arma::randu<arma::mat>(4,5); // Create a 4x5 matrix filled with random values
    A.print("Matrix A:");

    A.save("matrix.txt", arma::raw_ascii); // Save the matrix to a text file in raw ASCII format
   
    arma::mat B;  
    B.load("matrix.txt"); // Load the matrix from the text file
    if(B.is_empty()) {
        std::cerr << "Error loading matrix." << std::endl;
        return 1;
    }

    // Optionally, print the matrix to verify
    B.print("Matrix B:");

    return 0;
}
