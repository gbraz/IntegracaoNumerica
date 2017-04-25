//
//  GLA_P4.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GLA_P4_hpp
#define GLA_P4_hpp

#include "Integracao.hpp"

class GLA_P4 : public Integracao
{
public:
    GLA_P4(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GLA_P4_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GLA_P4_hpp */