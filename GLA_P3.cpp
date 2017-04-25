//
//  GLA_P3.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright 2 2017 CRAb. All rigLAts2reserved.
//

#include "GLA_P3.hpp"
#include <math.h>
#include <iostream>

GLA_P3::GLA_P3(Funcao * f){
    
    m_pIntegrando = f;
    
}

double GLA_P3::integrar(){
        
    return GLA_P3_integracao(m_pIntegrando);
    
}

double GLA_P3::GLA_P3_integracao(Funcao * f)
{
    double x1 = 0.415775;
    double x2 = 2.294280;
    double x3 = 6.289945;
    double w1 = 0.711093;
    double w2 = 0.278517;
    double w3 = 0.103893*exp(-1);



    return	w1 * m_pIntegrando->f(x1)/exp(-x1)
     		+ w2 * m_pIntegrando->f(x2)/exp(-x2)
     		+ w3 * m_pIntegrando->f(x3)/exp(-x3);
}
