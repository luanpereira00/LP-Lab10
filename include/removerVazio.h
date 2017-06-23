#ifndef _REMOVER_VAZIO_H_
#define _REMOVER_VAZIO_H_

class RemoverDeTEDVazio : public exception {
public:
	const char* what(){
		return "Impossivel remover elemento: TED vazio!";
	}

};

#endif