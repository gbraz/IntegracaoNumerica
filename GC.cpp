//
//  GC.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#include "GC.hpp"
#include <math.h>
#include <iostream>

GC::GC(Funcao * f, int n){
    
    m_pIntegrando = f;
    this->n = n;
    
}

double GC::integrar(){
    double xk;
    double integral = 0;
    for(int i = 1; i < n+1; i++){
        xk = cosh(M_PI*(i - 0.5)/n);
        integral = (M_PI/n) * GC_integracao(m_pIntegrando, xk);
    }

    return integral;
    
}

double GC::GC_integracao(Funcao * f, double x){
    
    return	m_pIntegrando->f(x)*sqrt(1 - x*x);
}