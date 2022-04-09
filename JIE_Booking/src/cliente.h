/*
 * cliente.h
 *
 *  Created on: Mar 25, 2022
 *      Author: imanoldt
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct{
	char nombreUsu [20];
	int dni;
	char email [25];
	int anoDeNacimiento;
	char contrasena[20];

} tCliente;

void pedirCliente (tCliente * cl);
void imprimirCliente (tCliente cl);

#endif /* CLIENTE_H_ */
