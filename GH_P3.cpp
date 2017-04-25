//
//  GH_P3.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#include "GH_P3.hpp"
#include <math.h>
#include <iostream>

GH_P3::GH_P3(Funcao * f, int N, double epsilon){
    
    m_pIntegrando = f;
    
}

double GH_P3::integrar(){
        
    return GH_P3_integracao(m_pIntegrando, m_lInf, m_lSup);
    
}

double GH_P3::GH_P3_integracao(Funcao * f)
{
    double x1 = -1.224744;
    double x2 = 0;
    double x3 = -x1;
    double w1 = 0.295409;
    double w2 = 1.181635;


    return	w1*(m_pIntegrando->f(x1)/exp(-x1*x1))
     		+ w2*(m_pIntegrando->f(x2)/exp(-x2*x2))
     		+ w3*(m_pIntegrando->f(x3)/exp(-x3*x3));
}