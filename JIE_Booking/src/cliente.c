/*
 * cliente.c
 *
 *  Created on: Mar 25, 2022
 *      Author: imanoldt
 */


#include "cliente.h"
#include <stdio.h>

void pedirCliente (tCliente * cl){

		printf("Nombre de usuario: ");
		fflush(stdout);
		fflush(stdin);
		gets(cl->nombreUsu);
		printf("DNI: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d",&cl->DNI);
		printf("Email: ");
		fflush(stdout);
		fflush(stdin);
		gets(cl->email);
		printf("Año nacimiento: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &cl->AnoNac);
		printf("contrasena: ");
		fflush(stdout);
		fflush(stdin);
		gets(cl->contrasena);
}

void imprimirCliente(tCliente cl){
	printf("%s %d %s %d %s\n", cl.nombreUsu, cl.DNI, cl.email, cl.AnoNac, cl.contrasena);
}
