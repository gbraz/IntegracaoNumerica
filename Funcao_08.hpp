//
//  Funcao_08.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_08_hpp
#define Funcao_08_hpp

#include <math.h>

#include "Funcao.hpp"

class Funcao_08 : public Funcao
{
public:
    double x(double alpha, double beta){

        return M_PI*(1 + alpha);
    }

    double y(double alpha, double beta){

    	double x_a = x(alpha, beta);
    	double c = sin(x_a);
    	double d = cos(x_a);

        return 0.5*(c + d + beta*(d - c));
    }
};


#endif /* Funcao_08_hpp */
