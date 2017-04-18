//
//  Funcao_ES.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_ES_hpp
#define Funcao_ES_hpp

#include <math.h>
#include "Funcao.hpp"


class Funcao_ES : public Funcao
{	
	double a;
	double b;
	Funcao *integrando;

public:
	Funcao_ES(Funcao *f, double a, double b){
		integrando = f;
		this->a = a;
		this->b = b;
	}

    double f(double x){

        return integrando->f((((a + b) + (b - a)*tanh(x))/2)) * (b - a)*(1 - tanh(x))/2;
    }
};


#endif /* Funcao_ES_hpp */