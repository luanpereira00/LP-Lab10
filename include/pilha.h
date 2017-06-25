/**
 * @file	pilha.h
 * @brief 	Classe que representa uma Pilha de dados
 * @details Os atributos de uma Pilha sao o vetor e o tamanho do vetor
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	17/05/2017
 * @date	17/05/2017
 */
#ifndef _PILHA_H_
#define _PILHA_H_

#include "exceptions.h"

/**@brief Namespace para EDB1 */
namespace EDB1{
	/** @brief Declaracao de template para o tipo T (int, float, double...)*/
	template <typename T>

	/** 
	* struct nodePilha lista.h
	* @brief Um struct para representar os nos de lista ligada
	*/
	struct nodePilha{
		T dado; /**< Elemento generico do no*/
		nodePilha* prox; /**< Apontador para o proximo no*/
	};

	/** @brief Declaracao de template para o tipo T (int, float, double...)*/
	template <typename T>

	/** 
	 * @class 	Lista lista.h
	 * @brief 	Classe que representa uma lista ligada ordenada duplamente encadeada de dados
	 * @details O atributo de uma lista eh a sentinela de inicio
	 */
	class Pilha{
	private:
		nodePilha<T>* inicio; /**< Sentinela de inicio da lista*/

	public:
		/** @brief Construtor padrao */
		Pilha(){
			inicio = new struct nodePilha<T>;

			inicio->dado=0;
			inicio->prox=NULL;
		}

		/** @brief Destrutor padrao */
		~Pilha(){
			nodePilha<T>* aux = inicio;
			if(aux->prox){
				nodePilha<T>* tmp = new nodePilha<T>;
				tmp->prox=inicio->prox;
				while(tmp->prox->prox){
					delete aux;
					aux = tmp->prox;
					tmp->prox=tmp->prox->prox;
				}
				delete tmp->prox;;
				delete tmp;
			}
			delete aux;
		}

		/** @return Retorna a sentinela de inicio da lista ligada*/
		nodePilha<T>* getInicio(){
			return inicio;
		}

		/** 
		* @brief Insere um elemento ordenadamente na lista
		* @param el O elemento que sera inserido na lista 
		*/
		void push(T el){
			//cout << "Inserindo o elemento " << el << endl;
			//nodeDeque<T>* it = buscar(el);
			nodePilha<T>* it = inicio;
			nodePilha<T>* tmp = new nodePilha<T>;
			tmp->dado=el;
			tmp->prox=it->prox;

			it->prox=tmp;
		}

		/** 
		* @brief Remove um elemento da lista ligada. (Informa também caso o elemento nao exista)
		* @param el O elemento que sera removido da lista 
		*/
		void pop(){
			//cout << endl;
			//cout << "Removendo o elemento " << el << endl;
			//nodeDeque<T>* it = buscar(el);
			nodePilha<T>* it = inicio;
			try{
				if(it->prox){
					nodePilha<T>* tmp = new nodePilha<T>;
					tmp->prox=it->prox->prox;

					delete it->prox; 

					it->prox=tmp->prox;

					delete tmp; 
				}
				else throw RemoverDeTEDVazio();
			}catch (RemoverDeTEDVazio &ex){
				cerr << ex.what() << endl;
			}
		}

		/** 
		* @brief Remove um elemento da lista ligada. (Informa também caso o elemento nao exista)
		* @param el O elemento que sera removido da lista 
		*/
		T top(){
			//cout << endl;
			//cout << "Removendo o elemento " << el << endl;
			//nodeDeque<T>* it = buscar(el);
			nodePilha<T>* it = inicio;
			try{
				if(it->prox){
					return it->prox->dado;
				}
				else throw ImprimirTEDVazio();
			}catch (ImprimirTEDVazio &ex){
				cerr << ex.what() << endl;
			}
			return it->dado;
		}

		bool temAlgo(){
			if(inicio->prox) return true;
			else return false;
		}
	};
}

#endif