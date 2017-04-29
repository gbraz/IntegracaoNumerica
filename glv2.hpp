#ifndef GLv2_hpp

#include <iostream>
#include <vector>
#include <math.h>
#include "Funcao.hpp"
#include "Funcao2.hpp"

class GLv2{

	double precisao = 0.00001;
public:

	GLv2();
	
	double derivadaOrdem1(Funcao *, double);
	double derivadaOrdem1(Funcao *, double, double);
	double derivadaOrdem1_e3(Funcao *fun, double x, double delta);
	double derivadaParcialX(Funcao2 *, double, double);
	double derivadaParcialX(Funcao2 *, double, double, double);
	double derivadaParcialY(Funcao2 *, double, double);
	double derivadaParcialY(Funcao2 *, double, double, double);
	std::vector< std::vector<double> > geraJacobiano(Funcao2 *, Funcao2 *, double, double);
	double determinante(std::vector<std::vector<double> > matriz);
};

#endif 