//
//  GH_P2.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GH_P2_hpp
#define GH_P2_hpp

#include "Integracao.hpp"

class GH_P2 : public Integracao
{
public:
    GH_P2(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GH_P2_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GH_P2_hpp */