//
//  Funcao_06.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_06_hpp
#define Funcao_06_hpp

#include <math.h>

#include "Funcao.hpp"

class Funcao_06 : public Funcao
{
public:
    double f(double x)
    {
        return sqrt(1 + (1/x));
    }
};


#endif /* Funcao_06_hpp */
