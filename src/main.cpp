/**
 * @file	main.cpp
 * @brief	Responsável por executar buscas, ordenacoes e criacoes de TADs genericos
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	18/03/2017
 * @date	18/03/2017
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "lista.h"
#include "deque.h"
#include "fila.h"
#include "pilha.h"
#include "vetor.h"
#include "sort.h"
#include "busca.h"

using namespace EDB1;
/**@brief Funcao principal */
int main(){
	
	Deque<int> deq;
	deq.removerInicio();
	deq.removerFim();
	deq.imprimir();
	deq.inserirInicio(1);
	deq.inserirInicio(2);
	deq.imprimir();
	deq.removerInicio();
	deq.removerFim();
	deq.removerInicio();
	deq.removerFim();
	deq.imprimir();
	cout << deq.temAlgo() << endl;
	
	
	Fila<int> fi;
	fi.remover();
	fi.imprimir();
	fi.inserir(1);
	fi.inserir(2);
	fi.imprimir();
	fi.remover();
	fi.remover();
	fi.remover();
	fi.imprimir();
	cout << fi.temAlgo() << endl;
	

	Lista<int> ll;
	ll.remover();
	ll.imprimir();
	ll.inserir(1);
	ll.inserir(2);
	ll.imprimir();
	ll.remover();
	ll.remover();
	ll.remover();
	ll.imprimir();
	cout << ll.temAlgo() << endl;

	Pilha<int> pil;
	pil.pop();
	cout << pil.top() << endl;
	pil.push(5);
	cout << pil.top() << endl;
	pil.pop();
	pil.pop();
	cout << pil.temAlgo() << endl;
	
	int *V = new int[5];
	createVetor(V, 5);
	quickSort(V, 5);
	cout << "ordenado" << endl;
	printVetor(V, 5);
	cout << "Aqui" << endl;

	cout << endl;
	cout << "BBR: " << buscaBinariaR(V, 0, 0) << endl;
	cout << "BBI: " << buscaBinariaI(V, 0, 0) << endl;
	cout << "BTR: " << buscaTernariaR(V, 0, 0) << endl;
	cout << "BTI: " << buscaTernariaI(V, 0, 0) << endl;
	cout << "BSR: " << buscaSequencialR(V, 0, 0) << endl;
	cout << "BSI: " << buscaSequencialI(V, 0, 0) << endl;
	//delete V;
	return 0;
}
