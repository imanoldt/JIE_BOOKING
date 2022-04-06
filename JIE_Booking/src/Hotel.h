/*
 * Hotel.h
 *
 *  Created on: Mar 17, 2022
 *      Author: imanoldt
 */

#ifndef HOTEL_H_
#define HOTEL_H_


typedef struct{
	char codH [20]; /* codigo de hotel compuesto por dos letras y 6 numeros */
	char nomH[50];
	int numHabitaciones;
	char locH[9];
	char dirH[100];
}tHotel;

void imprimirHotelesCSV(FILE *pf);


#endif /* HOTEL_H_ */
