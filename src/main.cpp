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
	/*
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
*/
	Pilha<int> pil;
	pil.pop();
	cout << pil.top() << endl;
	pil.push(5);
	cout << pil.top() << endl;
	pil.pop();
	pil.pop();
	cout << pil.temAlgo() << endl;
	

	/*
	int *X = new int[5];
	int N = 5;

	createVetor(X, N);
	printVetor(X, N);
	bubbleSort(X, N);
	printVetor(X, N);
	cout << "======================================" << endl;
	createVetor(X, N);
	printVetor(X, N);
	insertionSort(X, N);
	printVetor(X, N);
	cout << "======================================" << endl;
	createVetor(X, N);
	printVetor(X, N);
	selectionSort(X, N);
	printVetor(X, N);
	cout << "======================================" << endl;
	createVetor(X, N);
	printVetor(X, N);
	mergeSort(X, N);
	printVetor(X, N);
	cout << "======================================" << endl;
	createVetor(X, N);
	printVetor(X, N);
	quickSort(X, N);
	printVetor(X, N);
	cout << "======================================" << endl;
	createVetor(X, N);
	printVetor(X, N);
	decimalSort(X, N);
	printVetor(X, N);
	delete X;*/
	/*
	int *V = new int[5];
	createVetor(V, 5);
	quickSort(V, N);
	printVetor(V, 5);
	cout << "Aqui" << endl;

	cout << "BBR: " << buscaBinariaR(V, 5, 0) << endl;
	cout << "BBR: " << buscaBinariaR(V, 5, 1) << endl;
	cout << "BBR: " << buscaBinariaR(V, 5, 3) << endl;
	cout << "BBR: " << buscaBinariaR(V, 5, 4) << endl;
	cout << "BBR: " << buscaBinariaR(V, 5, 9) << endl;
	cout << endl;
	cout << "BBI: " << buscaBinariaI(V, 5, 0) << endl;
	cout << "BBI: " << buscaBinariaI(V, 5, 2) << endl;
	cout << "BBI: " << buscaBinariaI(V, 5, 6) << endl;
	cout << "BBI: " << buscaBinariaI(V, 5, 8) << endl;
	cout << "BBI: " << buscaBinariaR(V, 5, 10) << endl;
	cout << endl;
	cout << "BSR: " << buscaSequencialR(V, 5, 0) << endl;
	cout << "BSR: " << buscaSequencialR(V, 5, 1) << endl;
	cout << "BSR: " << buscaSequencialR(V, 5, 3) << endl;
	cout << "BSR: " << buscaSequencialR(V, 5, 4) << endl;
	cout << "BSR: " << buscaSequencialR(V, 5, 9) << endl;
	cout << endl;
	cout << "BSI: " << buscaSequencialI(V, 5, 0) << endl;
	cout << "BSI: " << buscaSequencialI(V, 5, 2) << endl;
	cout << "BSI: " << buscaSequencialI(V, 5, 6) << endl;
	cout << "BSI: " << buscaSequencialI(V, 5, 8) << endl;
	cout << "BSI: " << buscaSequencialR(V, 5, 10) << endl;
	cout << endl;
	cout << "BTR: " << buscaTernariaR(V, 5, 0) << endl;
	cout << "BTR: " << buscaTernariaR(V, 5, 1) << endl;
	cout << "BTR: " << buscaTernariaR(V, 5, 3) << endl;
	cout << "BTR: " << buscaTernariaR(V, 5, 4) << endl;
	cout << "BTR: " << buscaTernariaR(V, 5, 9) << endl;
	cout << endl;
	cout << "BTI: " << buscaTernariaI(V, 5, 0) << endl;
	cout << "BTI: " << buscaTernariaI(V, 5, 2) << endl;
	cout << "BTI: " << buscaTernariaI(V, 5, 6) << endl;
	cout << "BTI: " << buscaTernariaI(V, 5, 8) << endl;
	cout << "BTI: " << buscaTernariaI(V, 5, 10) << endl;
	cout << endl;
	cout << endl;
	cout << "BBR: " << buscaBinariaR(V, 0, 0) << endl;
	cout << "BBI: " << buscaBinariaI(V, 0, 0) << endl;
	cout << "BTR: " << buscaTernariaR(V, 0, 0) << endl;
	cout << "BTI: " << buscaTernariaI(V, 0, 0) << endl;
	cout << "BSR: " << buscaSequencialR(V, 0, 0) << endl;
	cout << "BSI: " << buscaSequencialI(V, 0, 0) << endl;
	delete V;*/
	return 0;
}
