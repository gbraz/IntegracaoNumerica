//
//  GL_P3.cpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#include "GL_P3.hpp"
#include <math.h>

GL_P3::GL_P3(Funcao * f, double a, double b, int N, double epsilon){
    
    m_pIntegrando = f;
    m_lInf        = a;
    m_lSup        = b;
    m_precisao    = epsilon;
    m_particao    = N;
    
}

double GL_P3::integrar(){
    
    double integral = 0.0;
    
    if (m_particao >= 1)
    {
        double step = (m_lSup - m_lInf)/m_particao;
        double linf, lsup;
        
        for (int i = 0; i < m_particao; i++)
        {
            linf = m_lInf + i*step;
            lsup = linf   + step;
            
            integral += GL_P3_integracao(m_pIntegrando, linf, lsup);
        }
        
        return integral;
    }
    else
    {
        int    N           = 1;
        double oldintegral = 0.0;
        double step;
        double linf, lsup;
        
        integral = GL_P3_integracao(m_pIntegrando, m_lInf, m_lSup);
        
        do
        {
            oldintegral = integral;
            integral    = 0.0;
            
            N = N*2;
            
            step = (m_lSup - m_lInf)/N;
            
            for (int i = 0; i < N; i++)
            {
                linf = m_lInf + i*step;
                lsup = linf   + step;
                
                integral += GL_P3_integracao(m_pIntegrando, linf, lsup);
            }
            
            
        } while (fabs(integral - oldintegral) > m_precisao);
        
        return integral;
    }
    
}

double GL_P3::GL_P3_integracao(Funcao * f, double a, double b)
{
    return (b-a)/2 * ( (0.88889)*m_pIntegrando->f(((b-a)*(-0.77459) + (a+b))/2)
                      + (0.55556)*m_pIntegrando->f((a+b)/2)
                      + (0.88889)*m_pIntegrando->f((a+b)/2)
                      + (0.55556)*m_pIntegrando->f(((b-a)*(0.77459) + (a+b))/2));
}
