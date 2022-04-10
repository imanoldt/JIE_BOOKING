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
#include  "log.h"




int main() {

	sqlite3 *db;
	char opcion,opcion2,opcion3,opcion4;

	tCliente c;

	int result = sqlite3_open("cliente.db", &db);
	if (result != SQLITE_OK) {
		loggerN("[ERROR]","DATABASE CAN NOT BE OPENED\n");
		return result;
	}

	loggerN("[INFO]","DATABASE OPENED\n") ;
	crearTablas(db);
	loggerN("[INFO]","DATABASE CREATED\n") ;

	do{
			opcion = prMenu_1();
			switch(opcion){
				case 1:
                    c=pedirClienteIS();
						break;
				case 2: c = pedirCliente();
						insertarPersona(db, c.nombre, c.dni, c.eMail, c.anoDeNacimiento,c.contrasena);
						printf("Persona registrada con exito!!");
						do{
							opcion2= prMenu_2();
							switch(opcion2){
								case 1:
									break;
								case 2:
									break;

							}

						}while(opcion=='0');
						return EXIT_SUCCESS;

//				case 3: mostrarPersonas(db); break;
//				case 0: printf("Saliendo del men�..."); fflush(stdin);break;
				default: printf("ERROR! La opci�n seleccionada no es correcta");loggerN("[TYPE]","TYPE OF OPCION NOT COMPATIBLE");fflush(stdin);
			}
		}while(opcion=='0');
		return EXIT_SUCCESS;
	}






