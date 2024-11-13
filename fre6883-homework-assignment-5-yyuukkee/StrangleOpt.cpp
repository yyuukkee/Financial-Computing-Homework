#include "StrangleOpt.h"

namespace fre {
    double Strangle::Payoff(double z) const {
        if (z <= K1) return K1 - z;
        if (K1 < z && z <= K2) return 0;
        return z - K2;
    }
}