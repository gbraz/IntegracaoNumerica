//
//  GL_P4.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GL_P4_hpp
#define GL_P4_hpp

#include "Integracao.hpp"

class GL_P4 : public Integracao
{
public:
    GL_P4(Funcao * f, double a, double b, int N, double epsilon);
    
    virtual double integrar();
    
private:
    double  GL_P4_integracao(Funcao * f, double a, double b);
    
    Funcao *m_pIntegrando;
    double  m_lInf;
    double  m_lSup;
    double  m_precisao;
    int     m_particao;
};


#endif /* GL_P4_hpp */