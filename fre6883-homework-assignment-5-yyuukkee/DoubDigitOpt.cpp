#include "DoubDigitOpt.h"

namespace fre {

    double DoubDigitOpt::Payoff(double z) const {
        return (K1 < z && z < K2) ? 1.0 : 0.0;
    }
}
