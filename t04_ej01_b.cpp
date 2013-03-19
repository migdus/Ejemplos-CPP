/*
Autor: Miguel Duss�n
Fecha: Mar 18, 2013 9:23 PM
*/

/*
Este programa determina si un n�mero entero es negativo
utilizando una estructura S�-Entonces-Si no
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;							//Declaraci�n e inicializaci�n
	
	//Mensaje que indica qu� hace el programa
	cout << "Este programa determina si un numero entero es negativo ";
	cout << "utilizando una estructura Si-Entonces-Si no"<<endl<<endl;
	
	cout << "Escriba un numero: ";			//Impresi�n en pantalla
	cin >> numero;							//Captura por teclado del n�mero
	
	if(numero<0)			//Estructura selectiva de una sola l�nea S�-Entonces
		cout << "El numero es negativo"; /*Puede escribirse opcionalmente 
										sin llaves*/
	else{								//Abre un Si No
		cout << "El numero es positivo";	/*C�digo que se ejecuta si la 
											condici�n del if es falsa.
											Como tiene una sola l�nea, tambi�n
											pod�a escribirse sin llaves */
	}									//Cierra un Si No
	return 0;
}
