//
//  GL_P3.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GL_P3_hpp
#define GL_P3_hpp

#include "Integracao.hpp"

class GL_P3 : public Integracao
{
public:
    GL_P3(Funcao * f, double a, double b, int N, double epsilon);
    
    virtual double integrar();
    
private:
    double  GL_P3_integracao(Funcao * f, double a, double b);
    
    Funcao *m_pIntegrando;
    double  m_lInf;
    double  m_lSup;
    double  m_precisao;
    int     m_particao;
};


#endif /* GL_P3_hpp */