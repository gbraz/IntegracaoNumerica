//
//  GLA_P3.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GLA_P3_hpp
#define GLA_P3_hpp

#include "Integracao.hpp"

class GLA_P3 : public Integracao
{
public:
    GLA_P3(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GLA_P3_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GLA_P3_hpp */