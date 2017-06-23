#ifndef _TAMANHO_INVALIDO_H_
#define _TAMANHO_INVALIDO_H_

#include <exception>
using std::exception;

class TamanhoDeVetorInvalido : public exception {
public:
	const char* what(){
		return "Tamanho de vetor invalido: Tamanho nao positivo!";
	}

};

#endif