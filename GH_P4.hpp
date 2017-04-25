//
//  GH_P4.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GH_P4_hpp
#define GH_P4_hpp

#include "Integracao.hpp"

class GH_P4 : public Integracao
{
public:
    GH_P4(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GH_P4_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GH_P4_hpp */