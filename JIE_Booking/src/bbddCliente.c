#include <stdio.h>
#include <string.h>
#include "bbddCliente.h"

void crearTablas(sqlite3 *db){
	sqlite3_stmt *stmt;

	char sql[] = "Create table cliente(nombre varchar2(20), DNI varchar2(10), eMail varchar2(25), anoDeNacimiento int, contrasena varchar2(8))";

	sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);

	sqlite3_step(stmt); //Ejecuta la sentencia

	sqlite3_finalize(stmt);//Finaliza la sentencia

}

//Añadimos todos los datos del cliente
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

void insertarPersona(sqlite3 *db, char nombre , char dni, char eMail, int anoDeNacimiento, char contrasena){
	sqlite3_stmt *stmt;
	char sql[200];

	sprintf(sql, "insert into cliente values(%s, %s, %s, %d, %s)",dni,nombre,eMail,anoDeNacimiento,contrasena);
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);

}
