#ifndef _IMPRIMIR_VAZIO_H_
#define _IMPRIMIR_VAZIO_H_

#include <exception>
using std::exception;

class ImprimirTEDVazio : exception {
public:
	const char* what(){
		return "Impossivel imprimir TED: TED vazio!";
	}
};

#endif