
#include "UtilidadesListaEnlazada.h"
#include <iostream>
using namespace std;

int main() 
{
	int cantiadd;
	int option;
	do{

		cout << "1. Seleccione esta opción para crear una lista" << endl;
		cout << "2. Imprima la lista" << endl;
		cout << "3. Exit" << endl;

		cin >> option;

		switch (option) {

		case 1:

			cout << "Cuantos nodos quieres crear?" << endl;
			cin >> cantiadd;

			UtilidadesListaEnlazada::crearLista(cantiadd);

			break;

		case 2:

			UtilidadesListaEnlazada::imprimir(0);

			break;

		case 3:


			break;

		}

	}


	while (option != 3);

	system("pause");

}