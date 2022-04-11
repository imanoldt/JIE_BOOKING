#include <stdio.h>
#include <string.h>
#include "bbddCliente.h"

void crearTablas(sqlite3 *db){
	sqlite3_stmt *stmt;

	char sql[] = "Create table cliente(nombre varchar2(20), DNI varchar2(10), eMail varchar2(25), anoDeNacimiento int, 
			"contrasena varchar2(8), numHabitacion int)";

	sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);

	sqlite3_step(stmt); //Ejecuta la sentencia

	sqlite3_finalize(stmt);//Finaliza la sentencia

}

//AÃ±adimos todos los datos del cliente
//void insertarCliente(sqlite3 *db, int dni, char *nombre, char *eMail, int anoDeNacimiento, char *contrasena){
//	sqlite3_stmt *stmt;
//
//	char sql[100];
//
//	sprintf(sql, "insert into cliente values(%d, %s, %s, %d, %s)",dni,nombre,eMail,anoDeNacimiento,contrasena);
//	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
//	sqlite3_step(stmt);
//	sqlite3_finalize(stmt);
//
//}

void insertarPersona(sqlite3 *db, char nombre , char dni, char eMail, int anoDeNacimiento, char contrasena, int numHabitacion){
	sqlite3_stmt *stmt;
	char sql[200];

	sprintf(sql, "insert into cliente values(%s, %s, %s, %d, %s, %d)",dni,nombre,eMail,anoDeNacimiento,contrasena, numHabitacion);
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);

}


int isOcupada(sqlite3 * db, int numHabitacion)
{
	char * sql = "SELECT numHabitacion FROM cliente;";
	//callback es la funcion que se llama cuando la linea de abajo es ejecutada.
	//está puesto para que imprima todos los valores de la columna numero de habirtacion
	//hay que hacer que compare en numHabitacion que entra a isocupada de parámetro con todos los numeros de habitacion
	//que saca de la base de datos callback (estos son argv[i] dentro del for)
	sqlite3_exec(db, sql, callback, 0, NULL);

}

int callback(void *NotUsed, int argc, char **argv,
                    char **azColName) {

    for (int i = 0; i < argc; i++) {

        printf("%s\n", argv[i]);
    }

    printf("\n");

    return 0;
}
