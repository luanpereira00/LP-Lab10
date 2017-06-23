#ifndef _TAMANHO_INVALIDO_
#define _TAMANHO_INVALIDO_

#include <exception>
using std::exception;

class TamanhoDeVetorInvalido : public exception {
public:
	const char* what(){
		return "Tamanho de vetor invalido: Tamanho nao positivo!";
	}

};

#endif