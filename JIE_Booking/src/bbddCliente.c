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


void insertarPersona(sqlite3 *db, char *dni , char *nombre, char *eMail, int anoDeNacimiento, char *contrasena){
	sqlite3_stmt *stmt;

	char sql[100];

	sprintf(sql, "insert into persona values(%s, %s, %s, %d, %s)",dni,nombre,eMail,anoDeNacimiento,contrasena);
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);
}








//Eliminamos el cliente por su dni
void borrarCliente(sqlite3 *db, int dni){
	sqlite3_stmt *stmt;
	char sql[100];
	sprintf(sql, "delete from cliente where dni = %d",dni);
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);

}
//Mostramos los datos del cliente de la base de datos
void mostrarCliente(sqlite3 *db){
	int resul, dni;
	sqlite3_stmt *stmt;
	char sql[100], *nombre, *cad;
	char letra;

	sprintf(sql, "select * from cliente");
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

	do{
		resul = sqlite3_step(stmt);
		dni = sqlite3_column_int(stmt, 0);
		strcpy(nombre, (char*)sqlite3_column_text(stmt, 1));
		/*strcpy(cad, (char*)sqlite3_column_text(stmt, 2));
		letra = cad[0];*/
		printf("%d %s\n",dni,nombre);
	}while(resul == SQLITE_ROW);

	/*resul = sqlite3_step(stmt);
	 * 	while(resul == SQLITE_ROW){
		dni = sqlite3_column_int(stmt, 0);
		strcpy(nombre, (char*)sqlite3_column_text(stmt, 1));
		printf("%d %s\n",dni,nombre);
		resul = sqlite3_step(stmt);
	}*/
	sqlite3_finalize(stmt);

}

void modificarNombreCliente(sqlite3 *db,int dni, char *nombre){
	sqlite3_stmt *stmt;
	char sql[100];

	sprintf(sql, "update cliente set nombre='%s' where dni=%d", nombre, dni);
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);

}

void borrarTodosLosClientes(sqlite3 *db){
	sqlite3_stmt *stmt;
	char sql[100];
	sprintf(sql, "delete from cliente");
	sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	sqlite3_step(stmt);
	sqlite3_finalize(stmt);

}































