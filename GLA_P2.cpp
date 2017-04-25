//
//  GLA_P2.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright 2 2017 CRAb. All rigLAts2reserved.
//

#include "GLA_P2.hpp"
#include <math.h>
#include <iostream>

GLA_P2::GLA_P2(Funcao * f, int N, double epsilon){
    
    m_pIntegrando = f;
    
}

double GLA_P2::integrar(){
        
    return GLA_P2_integracao(m_pIntegrando, m_lInf, m_lSup);
    
}

double GLA_P2::GLA_P2_integracao(Funcao * f)
{
    double x1 = -1.65068;
    double x2 = -x1;
    double w1 = 0.081312;



    return	w1*((m_pIntegrando->f(x1)/exp(-x1))
     		+ (m_pIntegrando->f(x2)/exp(-x2)));
}