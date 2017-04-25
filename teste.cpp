#include <iostream>
#include <math.h>
#include "Funcao.hpp"
#include "Funcao_01.hpp"
#include "Funcao_02.hpp"
#include "Funcao_03.hpp"
#include "Funcao_04.hpp"
#include "Funcao_05.hpp"
#include "Funcao_06.hpp"
#include "Funcao_ES.hpp"
#include "Funcao_ED.hpp"
#include "Integracao.hpp"
#include "GL_P1.hpp"
#include "GL_P2.hpp"
#include "GL_P3.hpp"
#include "GL_P4.hpp"
#include "NC_A_P0.hpp"
#include "NC_A_P1.hpp"
#include "NC_A_P2.hpp"
#include "NC_A_P3.hpp"
#include "NC_A_P4.hpp"
#include "NC_F_P1.hpp"
#include "NC_F_P2.hpp"
#include "NC_F_P3.hpp"
#include "NC_F_P4.hpp"

int main(){
	Funcao_06 *fun6 = new Funcao_06;
	Funcao_ED *fun = new Funcao_ED(fun6, 0, 2);

	std::cout << fun->z(-5);

}