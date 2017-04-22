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

    double f(double x){	

        double p1, p2;
        double y = (M_PI/2) * sinh(x);

        p1 = integrando->f(z(x));

        p2 = ((b - a) * (M_PI/4) * cosh(x) / (cosh(y)*cosh(y)));
        /*
        std::cout << "TESTE z:" << z << std::endl;
        std::cout << "TESTE p1:" << p1 << std::endl;
        std::cout << "TESTE p2:" << p2 << std::endl;
        std::cout << "TESTE res:" << res << std::endl;
        */

    	return p1 * p2;
    }

    double z(double x){

    	double y = (M_PI/2) * sinh(x);
        return (a + b + (b - a)*tanh(y))/2;
    }
};


#endif /* Funcao_ED_hpp */