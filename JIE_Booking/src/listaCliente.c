/*
 * listaCliente.c
 *
 *  Created on: 9 abr 2022
 *      Author: usuario
 */

#include "listaCliente.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

tListaCliente reservaMemoria(int tam){
	tListaCliente lc;

	lc.lista = (tCliente*)malloc(tam*sizeof(tCliente));
	lc.numCli = 0;
	lc.tam = tam;
	return lc;
}

void registrarCliente(tListaCliente *lc, tCliente cl){
	tCliente *aux;
	int i;
	if(lc->numCli==lc->tam){
		aux = (tCliente*)malloc(lc->numCli*sizeof(tCliente));
		for(i=0;i<lc->numCli;i++){
			aux[i] = lc->lista[i];
		}
		free(lc->lista);
		lc->lista = (tCliente*)malloc((lc->numCli+1)*sizeof(tCliente));
		for(i=0;i<lc->numCli;i++){
			lc->lista[i] = aux[i];
		}
		free(aux);
	}
	lc->lista[lc->numCli] = cl;
	lc->numCli++;
}
