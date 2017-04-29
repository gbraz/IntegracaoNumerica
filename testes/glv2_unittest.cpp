#include "gtest/gtest.h"

#include <iostream>

//#include <math.h>

#include "../glv2.hpp"
#include "../Funcao_01.hpp"
#include "../Funcao_07.hpp"
#include "../Funcao_07x.hpp"
#include "../Funcao_07y.hpp"

class JacobianoTest : public ::testing::Test {
protected:
	std::vector< std::vector<double> > m2;
	std::vector< std::vector<double> > m3;
	std::vector< std::vector<double> > jac1;

	JacobianoTest(){
		std::vector<double> l;

		l.push_back(1);
		l.push_back(7);
		m2.push_back(l);
		l.clear();
		l.push_back(5);
		l.push_back(-3);
		m2.push_back(l);
		
		l.clear();
		l.push_back(3);
		l.push_back(4);
		l.push_back(0);
		m3.push_back(l);
		l.clear();
		l.push_back(2);
		l.push_back(-1);
		l.push_back(4);
		m3.push_back(l);
		l.clear();
		l.push_back(5);
		l.push_back(1);
		l.push_back(1);
		m3.push_back(l);

		l.clear();
		l.push_back(0.392699081);
		l.push_back(0.106263605);
		jac1.push_back(l);
		l.clear();
		l.push_back(0);
		l.push_back(0.27059805);
		jac1.push_back(l);
	}

};
/*
TEST(MudancaVariavelTest, XConverteCorreto){
	double precisao = 0.00001;
	GLv2 g;

	EXPECT_GT(precisao , fabs(0.392699 - g.x(0, 1)));
	EXPECT_GT(precisao , fabs(2.356194 - g.x(5, 11)));
	EXPECT_GT(precisao , fabs(-3.141593 - g.x(-9, 111)));
}

TEST(MudancaVariavelTest, YConverteCorreto){
	
	GLv2 g;
	double precisao = 0.00001;

	EXPECT_NEAR(0.923880, g.y(0, 1), precisao);
	EXPECT_NEAR(-7.778174, g.y(5, 11), precisao);
	EXPECT_NEAR(-56, g.y(-9, 111), precisao);
}
*/
TEST(DerivacaoTest, PrimeiraOrdemFunciona){
	
	GLv2 g;
	Funcao_01 *fun = new Funcao_01();
	double precisao = 0.00001;

	EXPECT_NEAR(2 , g.derivadaOrdem1(fun, 1, precisao), precisao);
	EXPECT_NEAR(10 , g.derivadaOrdem1(fun, 5, precisao), precisao);
	EXPECT_NEAR(-18 , g.derivadaOrdem1(fun, -9, precisao), precisao);
}

TEST(DerivacaoTest, PrimeiraOrdemErroCubicoFunciona){
	GLv2 g;
	Funcao_01 *fun = new Funcao_01();
	double precisao = 0.00001;

	EXPECT_NEAR(2 , g.derivadaOrdem1_e3(fun, 1, 0.001), precisao);
	EXPECT_NEAR(10 , g.derivadaOrdem1_e3(fun, 5, 0.001), precisao);
	EXPECT_NEAR(-18 , g.derivadaOrdem1_e3(fun, -9, 0.001), precisao);
}


TEST(DerivacaoTest, PrimeiraOrdemParcialXFunciona){
	 
	GLv2 g;
	Funcao_07 *fun = new Funcao_07();
	double precisao = 0.0001;

	EXPECT_NEAR(0, g.derivadaParcialX(fun, 0, 0,0.001), precisao);
	EXPECT_NEAR(0.040874278, g.derivadaParcialX(fun, M_PI/6, M_PI/6, precisao), precisao);
	EXPECT_NEAR(0.866025403, g.derivadaParcialX(fun, -M_PI/6, 0, precisao), precisao);
}

TEST(DerivacaoTest, PrimeiraOrdemParcialYFunciona){

	GLv2 g;
	Funcao_07 *fun = new Funcao_07();
	double precisao = 0.00001;

	EXPECT_NEAR(0, g.derivadaParcialY(fun, 0, 0,precisao), precisao);
	EXPECT_NEAR(1 , g.derivadaParcialY(fun, M_PI/6, M_PI/6,0.001), precisao);
	EXPECT_NEAR(-1, g.derivadaParcialY(fun, -M_PI/6, 0,0.001), precisao);
}

TEST_F(JacobianoTest, ConstroiJacobiano){

	GLv2 g;
	Funcao_07x *funX = new Funcao_07x();
	Funcao_07y *funY = new Funcao_07y();
	std::vector< std::vector<double> > jacob_test = g.geraJacobiano(funX, funY, 0, 0);

	double precisao = 0.00001;
	
	for(int i = 0; i < jacob_test.size(); i++)
		for(int j = 0; j < jacob_test.size(); j++)
			EXPECT_NEAR(jac1[i][j], jacob_test[i][j], precisao);
}

TEST_F(JacobianoTest, DeterminanteFunciona){

	GLv2 g;
	EXPECT_EQ(-38, g.determinante(m2));
	EXPECT_EQ(57, g.determinante(m3));
}


int main(int argc, char **argv){
	
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}