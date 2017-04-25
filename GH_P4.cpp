//
//  GH_P4.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#include "GH_P4.hpp"
#include <math.h>
#include <iostream>

GH_P4::GH_P4(Funcao * f, int N, double epsilon){
    
    m_pIntegrando = f;
    
}

double GH_P4::integrar(){
        
    return GH_P4_integracao(m_pIntegrando, m_lInf, m_lSup);
    
}

double GH_P4::GH_P4_integracao(Funcao * f)
{
    double x1 = -1.65068;
    double x2 = 0.52464;
    double x3 = -x2;
    double x4 = -x1;
    double w1 = 0.081312;
    double w2 = 0.804914;
    double w3 = -w2;
    double w4 = -w1;


    return	w1*(m_pIntegrando->f(x1)/exp(-x1*x1))
     		+ w2*(m_pIntegrando->f(x2)/exp(-x2*x2))
            + w3*(m_pIntegrando->f(x3)/exp(-x3*x3))
     		+ w4*(m_pIntegrando->f(x4)/exp(-x4*x4));
}