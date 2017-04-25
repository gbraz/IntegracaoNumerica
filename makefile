intnumerica: main.cpp NC_F_P1.cpp GL_P2.cpp Funcao_ES.hpp Funcao_ED.hpp
	g++ main.cpp NC_F_P1.cpp NC_F_P2.cpp NC_F_P3.cpp NC_F_P4.cpp \
		NC_A_P0.cpp NC_A_P1.cpp NC_A_P2.cpp NC_A_P3.cpp NC_A_P4.cpp \
		GL_P1.cpp GL_P2.cpp GL_P3.cpp GL_P4.cpp \
		GH_P2.cpp GH_P3.cpp GH_P4.cpp \
		GLA_P2.cpp GLA_P3.cpp GLA_P4.cpp GC.cpp \-o intnumerica


teste: teste.cpp NC_F_P1.cpp GL_P2.cpp Funcao_ES.hpp Funcao_ED.hpp
	g++ teste.cpp NC_F_P1.cpp NC_F_P2.cpp NC_F_P3.cpp NC_F_P4.cpp \
		NC_A_P0.cpp NC_A_P1.cpp NC_A_P2.cpp NC_A_P3.cpp NC_A_P4.cpp \
		GL_P1.cpp GL_P2.cpp GL_P3.cpp GL_P4.cpp -o teste