#include <armadillo>

using namespace arma;

int main(){
    mat A(5, 5, fill::randu);
    vec b(5,    fill::randu);
    mat B(5, 5, fill::randu);
    A.print("matrix A:");
    b.print("vector b:");
    B.print("matrix B:");

    vec x1 = solve(A, b);
    x1.print("X for AX=b:");

    mat x2;
    bool status = solve(x2, A, B);
    x2.print("X for AX=B:");

    return 0;
}
