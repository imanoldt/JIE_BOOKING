/*
 ============================================================================
 Nombre      : JIE_Booking.c
 Autor       : Imanol Duran, Enrique Puente, Jaime Revilla
 Version     : 1
 Descripcion : Main de la aplicacion
 ============================================================================
 */

#include <stdio.h> /*INPUT_OUTPUT*/
#include <stdlib.h> /*GESTION_MEM_DINMC*/
#include "menu.h"
#include "sqlite3.h"
#include "bbddCliente.h"
#include  "cliente.h"
#include "listaCliente.h"




int main() {

	sqlite3 *db;
	char opcion;
	tCliente c;

	int result = sqlite3_open("cliente.db", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}

	printf("Database opened\n") ;


	crearTablas(db);

	printf("Añadiendo clientes");
	insertarPersona(db, "333", "Paula", "i@hotmail.com", 1940, "123e");
	insertarPersona(db, "222", "Kike", "h@hotmail.com", 2002, "222j");
	insertarPersona(db, "444", "Haizea", "j@hotmail.com", 2202, "111r");



	prMenu_2();


}

