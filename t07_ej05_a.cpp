/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que permita al usuario introducir N números enteros, y 
permita determinar el mayor y el menor de los números introducidos.
*/

#include <iostream>

/*
Esta biblioteca se utiliza para extraer la constante del número más grande
y más pequeño del tipo int
*/
#include <climits> 
	
using namespace std;

int main(){
	int cantidad_numeros = 0;
	int numero = 0;
	int numero_mayor = INT_MIN;	//Constante que indica el número más pequeño de
								//los enteros
								//Se asigna este valor para que cualquier 
								//número lo supere y sea, en principio, el mayor
	int numero_menor = INT_MAX;	//Constante que indica el número más pequeño de 
								//los enteros. Se asigna este valor para que 
								//cualquier número sea menor
	int contador = 0;
	
	//Mostrar explicación del programa
	cout << "Este programa permite al usuario introducir N numeros enteros, y"; 
	cout <<"determinar el mayor y el menor de los numeros introducidos.";
	cout<<endl<<endl;
	
	//Pedir la cantidad de números
	cout << "Cuantos numeros desea ingresar? ";
	cin >> cantidad_numeros;
	
	
	while(contador < cantidad_numeros){	/*Mientras el contador sea menor a la 
										cantidad de números*/
		cout << "Numero? ";				//Pedir un número
		cin >> numero;
		
		if(numero > numero_mayor)		/*Revisar si este número es mayor al 
										número más grande guardado*/
			numero_mayor = numero;		/*Si es mayor, se guarda como el mayor 
										de los ingresados*/
		
		if(numero < numero_menor){		/*Revisar si este número es más pequeño 
										que el menor guardado*/
			numero_menor = numero;		/*Si es menor, se guarda como el menor 
										de los ingresados*/
		}
		
		contador++;						/*Operador unario, que incrementa en 1 
										del contador.
										Equivalente a: contador = contador + 1;
										*/
	}
	
	//Mostrar los números en pantalla
	cout << "El numero mayor entre los ingresados es: " << numero_mayor << endl;
	cout << "El numero menor entre los ingresados es: " << numero_menor << endl;
	
	return 0;
}
