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
		gets(cl->nombre);
		printf("DNI: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d",&cl->dni);
		printf("Email: ");
		fflush(stdout);
		fflush(stdin);
		gets(cl->eMail);
		printf("A�o nacimiento: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &cl->anoDeNacimiento);
		printf("contrasena: ");
		fflush(stdout);
		fflush(stdin);
		gets(cl->contrasena);
}

void imprimirCliente(tCliente cl){
	printf("%s %s %s %d %s\n", cl.nombre, cl.dni, cl.eMail, cl.anoDeNacimiento, cl.contrasena);
}
