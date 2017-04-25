//
//  GH_P2.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#include "GH_P2.hpp"
#include <math.h>
#include <iostream>

GH_P2::GH_P2(Funcao * f){
    
    m_pIntegrando = f;
    
}

double GH_P2::integrar(){
        
    return GH_P2_integracao(m_pIntegrando);
    
}

double GH_P2::GH_P2_integracao(Funcao * f)
{
    double x1 = -0.70711;
    double x2 = -x1;

    return (0.88622)*(m_pIntegrando->f(x1)/exp(-x1*x1)
                      + m_pIntegrando->f(x2)/exp(-x2*x2));
}