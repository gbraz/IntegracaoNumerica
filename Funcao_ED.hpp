//
//  Funcao_ED.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_ED_hpp
#define Funcao_ED_hpp

#include <math.h>

#include "Funcao.hpp"

class Funcao_ED : public Funcao
{	
	double a;
	double b;
	Funcao *integrando;

public:
	Funcao_ED(Funcao *f, double a, double b){
		integrando = f;
		this->a = a;
		this->b = b;
	}

    double f(double x)
    {	
    	double z = M_PI*sinh(x)/2;
        return integrando->f((((a + b) + (b - a)*tanh(z))/2)) 
        		* (b - a)*(M_PI/4)*cosh(x) / (cosh(x)*cosh(x)*(M_PI*sinh(x)/2));
    }
};


#endif /* Funcao_ED_hpp */