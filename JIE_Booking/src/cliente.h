/*
 * cliente.h
 *
 *  Created on: Mar 25, 2022
 *      Author: imanoldt
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct{
	char nombre [20];
	char dni[10];
	char eMail [25];
	int anoDeNacimiento;
	char contrasena[20];
	int numHabitacion;


} tCliente;

//void pedirCliente (tCliente * cl);
tCliente pedirCliente();
tCliente pedirClienteIS();
void imprimirCliente (tCliente cl);

#endif /* CLIENTE_H_ */
