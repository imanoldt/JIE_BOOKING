
#ifndef BBDD_H_
#define BBDD_H_

#include "sqlite3.h"

void crearTablas(sqlite3 *db);
void insertarCliente(sqlite3 *db, int dni, char *nombre, char *eMail, int anoDeNacimiento, char *contraseña);
void borrarCliente(sqlite3 *db, int dni);
void mostrarCliente(sqlite3 *db);
void modificarNombreCliente(sqlite3 *db,int dni, char *nombre);
void borrarTodosLosClientes(sqlite3 *db);


#endif /* BBDD_H_ */
