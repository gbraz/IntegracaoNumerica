//
//  GLA_P2.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GLA_P2_hpp
#define GLA_P2_hpp

#include "Integracao.hpp"

class GLA_P2 : public Integracao
{
public:
    GLA_P2(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GLA_P2_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GLA_P2_hpp */