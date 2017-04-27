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

/*
double substituicaoExp(Funcao *fun, double a, double b, double precisao, int tipoquadratura, int numero_de_particoes){

    int n = 1;
    double oldIntegral;
    
    integrando = new Funcao_ED(fun, a, b, );
    switch(tipoquadratura){
        case 0:
            pintegrObj = new NC_A_P0(integrando, a, b, numero_de_particoes, precisao);
            integral   = pintegrObj->integrar();
            break;
            
        case 1:
            pintegrObj = new NC_A_P1(integrando, a, b, numero_de_particoes, precisao);
            integral   = pintegrObj->integrar();
            break;
            
        case 2:
            pintegrObj = new NC_A_P2(integrando, a, b, numero_de_particoes, precisao);
            integral   = pintegrObj->integrar();
            break;

        case 3:
            pintegrObj = new NC_A_P3(integrando, a, b, numero_de_particoes, precisao);
            integral   = pintegrObj->integrar();
            break;

        case 4:
            pintegrObj = new NC_A_P4(integrando, a, b, numero_de_particoes, precisao);
            integral   = pintegrObj->integrar();
            break;
    }
}*/