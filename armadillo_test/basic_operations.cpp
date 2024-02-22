#include <armadillo>

using namespace arma;

int main(){
    mat A(4, 5, fill::ones);
    mat B(4, 5, fill::ones);
    mat C(5, 4, fill::ones);

    A.print("A");
    B.print("B");
    C.print("C");

    mat P = A + B;
    mat Q = A - B;
    mat R = -B;
    mat S = A / 123.0;
    mat T = A % B;
    mat U = A * C;

    P.print("Matrix addition of A and B");
    Q.print("Subtract B from A");
    R.print("-B");
    S.print("Element-wise division");
    T.print("Element-wise multiplication of A and B");
    U.print("Matrix multiplication of A and C");

    imat AA = "1 2 3; 4 5 6; 7 8 9;";
    imat BB = "3 2 1; 6 5 4; 9 8 7;";

    // compare elements
    umat ZZ = (AA >= BB);

    AA.print("AA");
    BB.print("BB");
    ZZ.print("element-wise greater than or equal to of A and B");

    return 0;
}
