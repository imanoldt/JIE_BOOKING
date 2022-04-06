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


void imprimirHotelesCSV(FILE *pf){
	char *cadena;
	char *cod;
	char *dir;
	char *ciudad;
	char *nom;
	int num;

	pf=fopen(pf,"r");
	if(pf!=(FILE*)NULL){
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




