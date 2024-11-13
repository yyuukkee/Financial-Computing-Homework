#pragma once
#include "Option05.h"

namespace fre {
    class Strangle : public EurOption {
    private:
        double K1, K2;

    public:
        Strangle(int N_, double K1_, double K2_) : EurOption(N_), K1(K1_), K2(K2_) {}
        ~Strangle() {}

        double Payoff(double z) const override ;
    };
}
