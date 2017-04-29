#include "glv2.hpp"


GLv2::GLv2(){

}

double GLv2::derivadaOrdem1(Funcao *fun, double x){

	return derivadaOrdem1(fun, x, precisao);
}

double GLv2::derivadaOrdem1(Funcao *fun, double x, double delta){

	return (-fun->f(x + 2*delta) + 4*fun->f(x + delta) -3*fun->f(x))/(2*delta);
}

double GLv2::derivadaOrdem1_e3(Funcao *fun, double x, double delta){

	return ((1/3)*fun->f(x + 3*delta) - (3/2)*fun->f(x + 2*delta) +3*fun->f(x + delta) +(11/6)*fun->f(x))/delta;
}

double GLv2::derivadaParcialX(Funcao2 *fun, double x, double y){

	return derivadaParcialX(fun, x, y, precisao);
}

double GLv2::derivadaParcialX(Funcao2 *fun, double x, double y, double delta){

	return (-fun->f(x + 2*delta, y) +4*fun->f(x + delta, y) -3*fun->f(x, y))/(2*delta);
}

double GLv2::derivadaParcialY(Funcao2 *fun, double x, double y){

	return derivadaParcialX(fun, x, y, precisao);
}

double GLv2::derivadaParcialY(Funcao2 *fun, double x, double y, double delta){

	return (-fun->f(x, y + 2*delta) +4*fun->f(x, y + delta) -3*fun->f(x, y))/(2*delta);
}

std::vector< std::vector<double> > GLv2::geraJacobiano(Funcao2 *funU, Funcao2 *funV, double alpha, double beta){
	std::vector<double> coluna;
	std::vector< std::vector<double> > jacob;

	coluna.push_back(derivadaParcialX(funU, alpha, beta, precisao));
	coluna.push_back(derivadaParcialX(funV, alpha, beta, precisao));
	coluna.push_back(derivadaParcialY(funU, alpha, beta, precisao));
	coluna.push_back(derivadaParcialY(funV, alpha, beta, precisao));


	return jacob;
}

double GLv2::determinante(std::vector< std::vector<double> > m){
	double det = 0;

	if(m.size() == 2)
		return m[0][0]*m[1][1] - m[0][1]*m[1][0];
	if(m.size() == 3)
		return m[0][0]*m[1][1]*m[2][2] + m[0][1]*m[1][2]*m[2][0] + m[0][2]*m[1][0]*m[2][1] 
				-m[2][0]*m[1][1]*m[0][2] - m[2][1]*m[1][2]*m[0][0] - m[2][2]*m[1][0]*m[0][1];

	return det;
}