/*
Autor: Miguel Dussán
Fecha: Mar 18, 2013 9:23 PM
*/

/*
Este programa determina si un número entero es negativo
utilizando una estructura Sí-Entonces-Si no
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;							//Declaración e inicialización
	
	//Mensaje que indica qué hace el programa
	cout << "Este programa determina si un numero entero es negativo ";
	cout << "utilizando una estructura Si-Entonces-Si no"<<endl<<endl;
	
	cout << "Escriba un numero: ";			//Impresión en pantalla
	cin >> numero;							//Captura por teclado del número
	
	if(numero<0)			//Estructura selectiva de una sola línea Sí-Entonces
		cout << "El numero es negativo"; /*Puede escribirse opcionalmente 
										sin llaves*/
	else{								//Abre un Si No
		cout << "El numero es positivo";	/*Código que se ejecuta si la 
											condición del if es falsa.
											Como tiene una sola línea, también
											podía escribirse sin llaves */
	}									//Cierra un Si No
	return 0;
}
