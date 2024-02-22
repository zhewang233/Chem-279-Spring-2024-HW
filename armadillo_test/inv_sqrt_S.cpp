#include <armadillo>

using namespace arma;

int main(){
    mat S, inv_sqrt_S;
    vec eval;
    mat evecs;

    S.load("S.txt");
    S.print("Overlap matrix:");

    eig_sym(eval, evecs, S);
    eval.print("Evals:");
    evecs.print("Evecs:");

    mat inv_sqrt_s = arma::inv(arma::diagmat(arma::sqrt(eval)));

    inv_sqrt_s.print("Inverse square root of eigenvalues of S:");

    inv_sqrt_S = evecs * inv_sqrt_s * evecs.t();

    inv_sqrt_S.print("Inverse square root of S:");

    return 0;
}
