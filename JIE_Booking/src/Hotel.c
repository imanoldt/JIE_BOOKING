/*
 * Hotel.c
 *
 *  Created on: Apr 2, 2022
 *      Author: imanoldt
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hotel.h"
#include "log.h"


void imprimirHotelesCSV(/*FILE *pf*/){ // Devuelve la lista de Hoteles leida desde el dantaset .CSV
	FILE *pf;
	char *cadena;
	char *cod;
	char *dir;
	char *ciudad;
	char *nom;
	int num;

	pf=fopen("HotelesN.csv","r");
	if(pf!=(FILE*)NULL){

		loggerN("[INFO]", "FICHERO ABIERTO");


		fgets(cadena,200,pf);
		while(fgets(cadena,200,pf)!=NULL){
			cod = strtok(cadena,";");
			nom = strtok(NULL,";");
			num= atoi(strtok(NULL,";"));
			ciudad = strtok(NULL,";");
			dir = strtok(NULL,"");

			printf("%s %s %d %s %s\n",cod,nom,num,ciudad,dir);
			fflush(stdout);
		}
		fclose(pf);
	}
}




