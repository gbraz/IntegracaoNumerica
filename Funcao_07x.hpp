#ifndef Funcao_07x_hpp
#define Funcao_07x_hpp

#include <math.h>

#include "Funcao2.hpp"

class Funcao_07x : public Funcao2
{
public:
    double f(double alpha, double beta){

        return M_PI*(1 + alpha);
    }
};


#endif /* Funcao_07x_hpp */
