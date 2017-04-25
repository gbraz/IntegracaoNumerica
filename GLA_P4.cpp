//
//  GLA_P4.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright 2 2017 CRAb. All rigLAts2reserved.
//

#include "GLA_P4.hpp"
#include <math.h>
#include <iostream>

GLA_P4::GLA_P4(Funcao * f){
    
    m_pIntegrando = f;
    
}

double GLA_P4::integrar(){
        
    return GLA_P4_integracao(m_pIntegrando);
    
}

double GLA_P4::GLA_P4_integracao(Funcao * f)
{
    double x1 = 0.322547;
    double x2 = 1.745761;
    double x3 = 4.536620;
    double x4 = 9.395070;
    double w1 = 0.603154;
    double w2 = 0.357418;
    double w3 = 0.388879*exp(-1);
    double w4 = 0.539294*exp(-3);



    return	w1 * m_pIntegrando->f(x1)/exp(-x1)
     		+ w2 * m_pIntegrando->f(x2)/exp(-x2)
     		+ w3 * m_pIntegrando->f(x3)/exp(-x3)
            + w4 * m_pIntegrando->f(x4)/exp(-x4);
}