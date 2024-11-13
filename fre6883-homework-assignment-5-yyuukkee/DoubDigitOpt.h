#pragma once
#include "Option05.h"

namespace fre {

    class DoubDigitOpt : public EurOption {
    private:
        double K1; // Lower strike price
        double K2; // Upper strike price

    public:
        DoubDigitOpt(int N_, double K1_, double K2_) : EurOption(N_), K1(K1_), K2(K2_) {}
        ~DoubDigitOpt() {}

        // Payoff function for Double-Digital Option
        double Payoff(double z) const override ;
    };
}
