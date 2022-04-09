/*
 * Hotel.h
 *
 *  Created on: Mar 17, 2022
 *      Author: imanoldt
 */

#ifndef HOTEL_H_
#define HOTEL_H_

#define NUM_HAB_HOT 299
#define PRIMER_NUM_HAB 001
#define ULT_NUM_HAB 299

typedef struct{
	char codH [20]; /* codigo de hotel compuesto por dos letras y 6 numeros */
	char nomH[50];
	int numHabitaciones;
	char locH[9];
	char dirH[100];
	int numPerHab; // numero de personas por habitacion
	int HabLibre; //entero si es o --> no disponible, si es 1, si
}tHotel;

void imprimirHotelesCSV(/*FILE *pf*/);


#endif /* HOTEL_H_ */
