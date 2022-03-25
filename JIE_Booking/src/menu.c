/*
 * menu.c
 *
 *  Created on: Mar 25, 2022
 *      Author: imanoldt
 */

#include <math.h> /*FUN_MATEMATICAS*/
#include <stdio.h>

#define AMARILLO_COLOR "\x1b[33m"
#define CYAN_COLOR   "\x1b[36m"
#define COLOR_RESET  "\x1b[0m"

int prMenu_3() {
	int jOpcion;

	do {
		printf("\n   1. Hotel.");
		fflush(stdin);
		fflush(stdout);
		printf("\n   2. Bar");
		fflush(stdin);
		fflush(stdout);
		printf("\n   3. Atras.");
		fflush(stdin);
		fflush(stdout);

		printf("\n\n   Introduzca una opcion (1-3): ");
		fflush(stdin);
		fflush(stdout);

		scanf("%d", &jOpcion); /* Recoge la informacion marcada por el usuario*/

				/* switch para hacer la funcion requerida por el usuario*/

				switch (jOpcion) {
				case 1:
					printf("");
					break;

				case 2:
					printf("");
					break;

				case 3:
					prMenu_1();
					break;

				}

	} while (jOpcion != 3);
}

int prMenu_1() {

	int iOpcion;

	do {

		printf(
				AMARILLO_COLOR "\n============================================================================" COLOR_RESET "\n");
		printf(CYAN_COLOR "\nBienvenido a JIE_BOOKING" COLOR_RESET "\n");

		fflush(stdin);
		fflush(stdout);
		printf(
				AMARILLO_COLOR "\n============================================================================" COLOR_RESET "\n");
		fflush(stdin);
		fflush(stdout);

		printf("\n   1. Iniciar Sesion.");
		fflush(stdin);
		fflush(stdout);
		printf("\n   2. Registrarse");
		fflush(stdin);
		fflush(stdout);
		printf("\n   3. Salir.");
		fflush(stdin);
		fflush(stdout);

		printf("\n\n   Introduzca una opcion (1-3): ");
		fflush(stdin);
		fflush(stdout);

		scanf("%d", &iOpcion); /* Recoge la informacion marcada por el usuario*/

		/* switch para hacer la funcion requerida por el usuario*/

		switch (iOpcion) {
		case 1:
			printf("");
			break;

		case 2:
			printf("");
			break;

		case 3:
			printf("\n¡Hasta pronto!");

		}

		/*  */

	} while (iOpcion != 3);

	return 0;

}
