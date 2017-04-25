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
	Funcao_ED(Funcao *func, double a, double b){
		
        this->a = a;
        this->b = b;
		integrando = func;
	}

    double f(double s){	
        
        double dxdu;
        dxdu = (b - a)*(M_PI/4)*cosh(s)/(cosh(u(s)) *cosh(u(s)));

        return integrando->f(x(s)) * dxdu;
    }

    double x(double s){

        return (a + b)/2 + (b - a)*tanh(u(s))/2;
    }

    double u(double s){

        return (M_PI/2) * sinh(s);
    }

};


#endif /* Funcao_ED_hpp */