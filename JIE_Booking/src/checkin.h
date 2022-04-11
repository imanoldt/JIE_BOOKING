/*
 * checkin.h
 *
 *  Created on: 9 abr 2022
 *      Author: usuario
 */

#ifndef CHECKIN_H_
#define CHECKIN_H_
#include <stdlib.h>
#include "cliente.h"
#include "hotel.h"

#define MAX_PERSONAS_HAB 4
#define MIN_PERSONAS_HAB 1

typedef struct{
	tCliente * Cllista;
	tHotel * Holista;
	int numClienteHab;
	int checkOut;
} tCheckIn;

void AnadirReserva(tCheckIn** ListReserva, int* tamanyoLista, tCheckIn* ReservaAAnadir);
void ReservaInicial (tCheckIn** ReservaNueva, tHotel* HabitacionLibre, tCliente* ReservaCliente);
void AsignarNumPerHab (tCheckIn** ReservaNueva);
void LiberarReserva(tCheckIn*** LiberarListaReserva, int* tamanyoLista);


#endif /* CHECKIN_H_ */
