/*
 * Hotel.h
 *
 *  Created on: Mar 17, 2022
 *      Author: imanoldt
 */

#ifndef HOTEL_H_
#define HOTEL_H_

typedef struct{
	char nombre [20];
	char descripcion[50];
	char localidad[15];	/* codigo de hotel compuesto por dos letras y 6 numeros */
	char codigo[9];
	int numHabitaciones;
}tHotel;





#endif /* HOTEL_H_ */
