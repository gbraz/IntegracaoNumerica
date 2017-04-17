//
//  Funcao_05.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_05_hpp
#define Funcao_05_hpp

#include <math.h>

#include "Funcao.hpp"

class Funcao_05 : public Funcao
{
public:
    double f(double x)
    {
        return (x*x*x - x*x + 6*x);
    }
};


#endif /* Funcao_05_hpp */
