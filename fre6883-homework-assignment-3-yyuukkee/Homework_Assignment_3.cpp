#include <iostream>
class Defint{
    private:
    double a;
    double b;
    //pointer to a function
    double (*f)(double);
    public:
    Defint(double a, double b, double (*f)(double)):a(a),b(b),f(f){}

    double ByTrapzoid(int N){
        double h = (b-a)/N;
        double sum = 0.5*(f(a)+f(b));
        for(int i = 1; i < N; i++){
            sum += f(a+i*h);
        }
        return sum*h;
    
    }

    double BySimpson(int N) {
        if (N % 2 != 0) {
            std::cerr << "N needs to be an even number" << std::endl;
            return 0;
        }

        double h = (b - a) / N;
        double sum = f(a) + f(b); 

        for (int k = 1; k < N; k += 2) {
            sum += 4 * f(a + k * h);
        }

        for (int k = 2; k < N; k += 2) {
            sum += 2 * f(a + k * h);
        }

        return (h / 3) * sum;
    }


};

double f(double x) {
    double result =x*x*x- x * x+1;
    return result;
}

int main() {
    double (*func_pointer)(double) = f;  
   
    Defint Myint(1, 2, func_pointer);

    int N = 100;
    std::cout << "ByTrapezoid: " << Myint.ByTrapzoid(N) << std::endl;
    std::cout << "BySimpson: " << Myint.BySimpson(N) << std::endl;

    return 0;
}
//output:
//ByTrapezoid: 2.41673
//BySimpson: 2.41667
//the accurate value is 2.41667

