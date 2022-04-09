/*
 * listacliente.h
 *
 *  Created on: 9 abr 2022
 *      Author: usuario
 */

#ifndef LISTACLIENTE_H_
#define LISTACLIENTE_H_
#include "cliente.h"
typedef struct{
	tCliente *lista;
	int numCli;
	int tam;
}tListaCliente;

tListaCliente reservaMemoria(int tam);
void registrarCliente(tListaCliente *lc, tCliente cl);

#endif /* LISTACLIENTE_H_ */
