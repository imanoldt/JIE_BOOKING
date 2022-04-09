#include "bbdd.h"
#include <stdio.h>
#include <string.h>

void crearTablas(sqlite3 *db){
	sqlite3_stmt *stmt;

	char sql[] = "Create table cliente(nombre varchar2(20), DNI int, eMail varchar2(25), anoDeNacimiento int, contraseña varchar2(8))";
	int result = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(result != SQLITE_OK){
		printf("Error preparing statement (SELECT)\n");
		printf("%s\n", sqlite3_ermsg(db));
		return result;

	}

	printf("SQL query prepared (SELECT)\n");
	result = */sqlite3_step(stmt); //Ejecuta la sentencia
		if (result != SQLITE_DONE) {
			printf("Error creating table\n");
			printf("%s\n", sqlite3_errmsg(db));
			return result;
		}
		result = */sqlite3_finalize(stmt);
		if (result != SQLITE_OK) {
			printf("Error finalizing statement (DELETE)\n");
			printf("%s\n", sqlite3_errmsg(db));
			return result;

		}

		printf("Prepared statement finalized (DELETE)\n");

		return SQLITE_OK;

}
//Añadimos todos los datos del cliente
void insertarCliente(sqlite3 *db, int dni, char *nombre, char *eMail, int anoDeNacimiento, char *contraseña){
	sqlite3_stmt *stmt;

	char sql[100];

	sprintf(sql, "insert into cliente values(%d, %s, %s, %d, %s)", dni, nombre, eMail, anoDeNacimiento, contraseña);
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
		id = sqlite3_column_int(stmt, 0);
		strcpy(nom, (char*)sqlite3_column_text(stmt, 1));
		/*strcpy(cad, (char*)sqlite3_column_text(stmt, 2));
		letra = cad[0];*/
		printf("%d %s\n",dni,nombre);
	}while(resul == SQLITE_ROW);

	/*resul = sqlite3_step(stmt);
	 * 	while(resul == SQLITE_ROW){
		id = sqlite3_column_int(stmt, 0);
		strcpy(nom, (char*)sqlite3_column_text(stmt, 1));
		printf("%d %s\n",id,nom);
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































