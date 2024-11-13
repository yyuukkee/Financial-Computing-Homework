#include <iostream>
#include <iomanip>
#include "BinomialTreeModel02.h"
#include "Option05.h"


using namespace std;
using namespace fre;

int main() {
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K=100, K1 = 100, K2 = 110;

    BinomialTreeModel Model(S0, U, D, R);
    Call callOpt(N, K);
    Put putOpt(N, K);
    BullSpread bullSpreadOpt(N, K1, K2);
    BearSpread bearSpreadOpt(N, K1, K2);
    OptionCalculation optCalculation_call(&callOpt);
    OptionCalculation optCalculation_put(&putOpt);
    OptionCalculation optCalculation_bullSpread(&bullSpreadOpt);
    OptionCalculation optCalculation_bearSpread(&bearSpreadOpt);
    
    cout << "European call option price = "
         << fixed << setprecision(2) << optCalculation_call.PriceByCRR(Model) << endl;
    cout << "European put option price = "
            << fixed << setprecision(2) << optCalculation_put.PriceByCRR(Model) << endl;
    cout << "European Bull spread option price = "
            << fixed << setprecision(2) << optCalculation_bullSpread.PriceByCRR(Model) << endl;
    cout << "European Bear spread option price = "
            << fixed << setprecision(2) << optCalculation_bearSpread.PriceByCRR(Model) << endl;

    return 0;
}
/*
European call option price = 21.68
European put option price = 11.43
European Bull spread option price = 4.72
European Bear spread option price = 4.86
*/