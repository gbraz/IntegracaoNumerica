//
//  Funcao_07.hpp
//  IntegracaoNumerica
//
//  Created by cvidal on 3/12/17.
//  Copyright © 2017 CRAb. All rights reserved.
//

#ifndef Funcao_07_hpp
#define Funcao_07_hpp

#include <math.h>

#include "Funcao.hpp"

class Funcao_07 : public Funcao
{
public:
    double f(double x, double y)
    {
        return 2*y*sin(x) + cos(x)*cos(x);
    }
};


#endif /* Funcao_07_hpp */
