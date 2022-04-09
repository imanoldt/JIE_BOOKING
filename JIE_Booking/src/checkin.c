/*
 * checkin.c
 *
 *  Created on: 9 abr 2022
 *      Author: usuario
 */

#include <stdio.h>
#include <string.h>
#include "hotel.h"
#include "cliente.h"
#include "checkin.h"


void AnadirReserva(tCheckIn*** ListReserva, int* tamanyoLista, tCheckIn* ReservaAAnadir){

	(*tamanyoLista)++;

	(*ListReserva) = (tCheckIn**)realloc(*ListReserva, (*tamanyoLista) * sizeof(tCheckIn*));
		if (!*ListReserva)//--> alojamiento incorrecto
		{
			printf("ERROR; Memoria ocupada\n");
			return;
		}
		(*ListReserva)[(*tamanyoLista) - 1] = ReservaAAnadir;
}

void ReservaInicial (tCheckIn** ReservaNueva, tHotel* HabitacionLibre, tCliente* ReservaCliente){

	*ReservaNueva = (tCheckIn*)calloc(1, sizeof(tCheckIn));
		(*ReservaNueva)->checkOut = 0; // check-in
		(*ReservaNueva)->Cllista = ReservaCliente;
		AsignarNumPerHab(ReservaNueva);
		HabitacionLibre->numPerHab = (*ReservaNueva)->numClienteHab;
		HabitacionLibre->HabLibre = 0;
		(*ReservaNueva)->Holista = HabitacionLibre;
}

void AsignarNumPerHab (tCheckIn** ReservaNueva){

		int PersonasHab = 0;


		do
		{
			printf("Hey, please enter num of people that in the room %d-%d \n", MIN_PERSONAS_HAB, MAX_PERSONAS_HAB);
			scanf("%d", &PersonasHab);
			if (PersonasHab<MIN_PERSONAS_HAB || PersonasHab>MAX_PERSONAS_HAB) {
				printf("I ask  %d-%d try again \n", MIN_PERSONAS_HAB, MAX_PERSONAS_HAB);
			}
			else {
				(*ReservaNueva)->numClienteHab = PersonasHab;
			}
		} while (PersonasHab<MIN_PERSONAS_HAB || PersonasHab>MAX_PERSONAS_HAB);

		//para hacer el bar
		/*do
		{
			printf("Hey, please enter num of people that eat breakfast in the room %d-%d \n", MIN_PEOPLE_IN_BREAKFAST, MAX_PEOPLE_IN_ROOM_AND_BREAKFAST);
			scanf("%d", &numOfPeopleEatBreakfast);
			if (numOfPeopleEatBreakfast < MIN_PEOPLE_IN_BREAKFAST || numOfPeopleEatBreakfast > MAX_PEOPLE_IN_ROOM_AND_BREAKFAST) {
				printf("I ask  %d-%d try again", MIN_PEOPLE_IN_BREAKFAST, MAX_PEOPLE_IN_ROOM_AND_BREAKFAST);
			}
			else {
				(*newReservation)->numOfPeopleEatBreakfast = numOfPeopleEatBreakfast;
			}
		} while (numOfPeopleEatBreakfast< MIN_PEOPLE_IN_BREAKFAST || numOfPeopleEatBreakfast > MAX_PEOPLE_IN_ROOM_AND_BREAKFAST);
	}*/
}

//El Check-Out se hara mediante la liberacion de reserva
void LiberarReserva(tCheckIn*** LiberarListaReserva, int* tamanyoLista){

	int i;
		for (i = 0; i < *tamanyoLista; i++) {
			free((*LiberarListaReserva)[i]);
		}
}
