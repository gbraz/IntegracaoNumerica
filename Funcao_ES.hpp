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
	Funcao_ES(Funcao *func, double a, double b){

		this->a = a;
		this->b = b;
		integrando = func;
	}

    double f(double x){
    	double Xz = z(x);
    	double g_S, f_Xz , f2;

    	g_S = integrando->f(Xz) * ((b - a)/2) *(1 - tanh(x)*tanh(x));
        return g_S;
    	/*
    	f_Xz = integrando->f(Xz);
    	std::cout << "\nTESTE a:" << a;
    	std::cout << "\nTESTE b:" << b;
    	std::cout << "\nTESTE X:" << x;
    	std::cout << "\nTESTE Xz z(x):" << Xz;
    	f2 = integrando->f(2);
    	std::cout << "\nTESTE f(2) " << f2;
    	std::cout << "\nTESTE f(Xz) " << f_Xz;
    	std::cout << "\nTESTE g(s) " << g_S;
        std::cout << std::endl;
    	int k;
        std::cin >> k;
        return integrando->f(Xz) * (cosh(Xz)/ (cosh(y2)*cosh(y2))); 
        */
    }

    double z(double x){
    	return (a + b + (b - a)*tanh(x))/2;
    }
};


#endif /* Funcao_ES_hpp */