#include <iostream>
#include "UtilidadesListaEnlazada.h"
#include <fstream>
#include <stdlib.h>

using namespace std;


void UtilidadesListaEnlazada::insertar(nodo ** inicio, char * nombre) {

	nodo *tmp = new nodo;

	tmp->nombre_ingresado = new char[strlen(nombre)];

	strcpy_s(tmp->nombre_ingresado, strlen(nombre) + 1, nombre);





	//Ya que se copian los datos toca comprar e insertar
	tmp->sig = 0;
	tmp->ant = 0;
	if (inicio == 0) {

		*inicio = tmp;

	}
	else {

nodo *temporal = *inicio;

if (strcmp(temporal->nombre_ingresado, tmp->nombre_ingresado) < 0) {
insertar(&temporal->sig, tmp->nombre_ingresado);}
else if (strcmp(temporal->nombre_ingresado, tmp->nombre_ingresado) > 0) {
insertar(&temporal->ant, tmp->nombre_ingresado);

		}
	}
}

nodo ** UtilidadesListaEnlazada::crearLista(int valorIngresar) {

nodo ** inicio = 0; 	char * nombre_ingresado = 0;

	for (int a = 0; a<valorIngresar; a++) {

		cout << "Enter a name : " << endl;
		cin >> nombre_ingresado;

		insertar(inicio, nombre_ingresado);

	}

	return inicio;

}

void UtilidadesListaEnlazada::imprimir(nodo ** inicio) {

	if (*inicio == 0) {return;}
	else {nodo * tmp = *inicio; printf("%s\n", tmp->nombre_ingresado); imprimir(&tmp->sig);}
}




/*
static  int GuardarLista(nodo **tmp, char *) {

}

void UtilidadesListaEnlazada::InsertarFinal(nodo *&enlaze_lista, int numero_valorregistro) {
	//cout << "INSERCION DE DATOS AL FINAL DEL ARCHIVO!";
	nodo *temporal_nuevo = new nodo();

	temporal_nuevo->sig = nullptr;
	temporal_nuevo->ant = nullptr;

	temporal_nuevo->numero_valorregistro = numero_valorregistro;

	if (enlaze_lista == nullptr) {


		enlaze_lista = temporal_nuevo;

	}
	else {
		temporal_nuevo->sig = temporal_nuevo;
		temporal_nuevo->ant = enlaze_lista;
		enlaze_lista = temporal_nuevo;
	}
}




void UtilidadesListaEnlazada::OrdenarLista(nodo *enlaze_lista) {
	nodo *temporal_nuevo = enlaze_lista;


	while (temporal_nuevo != 0) {


		nodo *auxiliar = temporal_nuevo->ant;
		while (auxiliar != NULL) {
			if (temporal_nuevo->numero_valorregistro < auxiliar->numero_valorregistro) {
				int aux = auxiliar->numero_valorregistro;
				auxiliar->numero_valorregistro = temporal_nuevo->numero_valorregistro;
				temporal_nuevo->numero_valorregistro = aux;
			}

			auxiliar = auxiliar->ant;
		}

		temporal_nuevo = temporal_nuevo->ant;
	}

}



nodo ** UtilidadesListaEnlazada::CrearLista(int numero_valorregistro) {

	nodo * temporal_nuevo = new nodo;

	int numerorand = 0;

	if (numero_valorregistro =0) {

		return 0;
		

	}
	else {



		for (int r = 1; r <= numero_valorregistro; r++) {
			numerorand = rand() % numero_valorregistro + 1;
			InsertarFinal(temporal_nuevo, numerorand);
		}
	}
	return &temporal_nuevo;
}
*/