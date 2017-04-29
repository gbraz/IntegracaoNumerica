#ifndef Funcao_07y_hpp
#define Funcao_07y_hpp

#include <math.h>

#include "Funcao2.hpp"

class Funcao_07y : public Funcao2{

public:
    double f(double alpha, double beta){

    	double x_a = x(alpha, beta);
    	double c = sin(x_a);
    	double d = cos(x_a);

        return 0.5*(c + d + beta*(d - c));
    }

    double x(double alpha, double beta){

        return M_PI*(1 + alpha);
    }
};


#endif /* Funcao_07y_hpp */
