#include "BinomialTreeModel02.h"
#include "BSModel.h"
#include "Option08.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace fre;

int main() {
    double S0 = 106.0;
    double r = 0.058;
    double sigma = 0.46;
    double T = 9.0 / 12.0;
    int N = 8;
    double K = 100.0;

    cout << setiosflags(ios::fixed) << setprecision(5);

    BSModel bsModel(S0, r, sigma, T, N);
    BinomialTreeModel binModel = bsModel.CreateBinomialTreeModel();

    Call call(N, K);
    OptionCalculation callCalculation(&call);

    cout << "American call option price = "
         << callCalculation.PriceByCRR(binModel) << endl;

    return 0;
}
/*American call option price = 21.68171
Since in the given code, the precision is set to be 5, if we want to get the same result as the answer 
21.682 we just need to set the precision to 3 in the code 
cout << setiosflags(ios::fixed) << setprecision(3);.
*/

