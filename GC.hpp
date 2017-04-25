//
//  GC.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef GC_hpp
#define GC_hpp

#include "Integracao.hpp"

class GC : public Integracao
{
public:
    GC(Funcao * f, int n);
    
    virtual double integrar();
    
private:
    double  GC_integracao(Funcao * f, double x);
    
    int n;
    Funcao *m_pIntegrando;
};


#endif /* GC_hpp */