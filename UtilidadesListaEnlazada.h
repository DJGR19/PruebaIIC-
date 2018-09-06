#pragma once
#ifndef UtilidadesListaEnlazada_h
#define UtilidadesListaEnlazada_h

struct nodo {
	
	nodo *sig;
	nodo *ant;
	char * nombre_ingresado;
	nodo()
	{
		sig = 0;
		ant = 0;
	}

};

class UtilidadesListaEnlazada {
public:
	static void insertar(nodo **, char *);
	static nodo ** crearLista(int);
	static void imprimir(nodo **);

};

#endif // !UtilidadesListaEnlazada


