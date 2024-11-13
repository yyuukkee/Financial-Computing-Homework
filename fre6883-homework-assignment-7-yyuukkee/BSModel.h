#pragma once
#include <cmath>
#include "BinomialTreeModel02.h"

namespace fre {
class BSModel {
private:
    double S0, r, sigma, T;
    int N;

public:
    BSModel(double s0, double r_, double sigma_, double t, int n)
        : S0(s0), r(r_), sigma(sigma_), T(t), N(n) {}

    BinomialTreeModel CreateBinomialTreeModel() {
        double h = T / N;
        double U = exp(sigma * sqrt(h));
        double D = 1.0 / U;
        double R = exp(r * h);
        return BinomialTreeModel(S0, U, D, R);
    }
};
}
