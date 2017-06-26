/**
 * @file	tamanhoInvalido.h
 * @brief	Definicao da classe de tratamento de excecao para resolver casos de envio de tamanho invalido de um vetor
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	25/06/2017
 * @date	25/06/2017
 */

#ifndef _TAMANHO_INVALIDO_H_
#define _TAMANHO_INVALIDO_H_

#include <exception>
using std::exception;

/**@brief Namespace para EDB1 */
namespace EDB1{

	/** 
	 * @class 	TamanhoDeVetorInvalido tamanhoInvalido.h
	 * @brief 	Classe que representa uma excecao para casos de envio de um tamanho invalido de vetor
	 */
	class TamanhoDeVetorInvalido : public exception {
	public:
		/** @return Retorna a excecao*/
		const char* what(){
			return "Tamanho de vetor invalido: Tamanho nao positivo!";
		}
	};
}

#endif