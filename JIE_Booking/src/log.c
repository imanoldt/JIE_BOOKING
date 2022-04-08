/*
 * log.c
 *
 *  Created on: Apr 7, 2022
 *      Author: imanoldt
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "log.h"

void loggerN(char* nivel, char* mensaje) {
   time_t now; //Definimos una variable de tipo <time_t> del time.h ()
   time(&now); //Utilizamos la func time() para manejar la variable anterior
   printf("%s [%s]: %s\n", ctime(&now), nivel, mensaje);
   // 						Recoge la fecha y hora del sistema | tipo de mensaje | mensaje
}
