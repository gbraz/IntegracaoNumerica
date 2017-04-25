//
//  GH_P3.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GH_P3_hpp
#define GH_P3_hpp

#include "Integracao.hpp"

class GH_P3 : public Integracao
{
public:
    GH_P3(Funcao * f);
    
    virtual double integrar();
    
private:
    double  GH_P3_integracao(Funcao * f);
    
    Funcao *m_pIntegrando;
};


#endif /* GH_P3_hpp */