/*
Autor: Miguel Duss�n
*/

/*
Escriba un programa que permita al usuario introducir N n�meros enteros, y 
permita determinar el mayor y el menor de los n�meros introducidos.
*/

#include <iostream>

/*
Esta biblioteca se utiliza para extraer la constante del n�mero m�s grande
y m�s peque�o del tipo int
*/
#include <climits> 
	
using namespace std;

int main(){
	int cantidad_numeros = 0;
	int numero = 0;
	int numero_mayor = INT_MIN;	//Constante que indica el n�mero m�s peque�o de
								//los enteros
								//Se asigna este valor para que cualquier 
								//n�mero lo supere y sea, en principio, el mayor
	int numero_menor = INT_MAX;	//Constante que indica el n�mero m�s peque�o de 
								//los enteros. Se asigna este valor para que 
								//cualquier n�mero sea menor
	int contador = 0;
	
	//Mostrar explicaci�n del programa
	cout << "Este programa permite al usuario introducir N numeros enteros, y"; 
	cout <<"determinar el mayor y el menor de los numeros introducidos.";
	cout<<endl<<endl;
	
	//Pedir la cantidad de n�meros
	cout << "Cuantos numeros desea ingresar? ";
	cin >> cantidad_numeros;
	
	
	while(contador < cantidad_numeros){	/*Mientras el contador sea menor a la 
										cantidad de n�meros*/
		cout << "Numero? ";				//Pedir un n�mero
		cin >> numero;
		
		if(numero > numero_mayor)		/*Revisar si este n�mero es mayor al 
										n�mero m�s grande guardado*/
			numero_mayor = numero;		/*Si es mayor, se guarda como el mayor 
										de los ingresados*/
		
		if(numero < numero_menor){		/*Revisar si este n�mero es m�s peque�o 
										que el menor guardado*/
			numero_menor = numero;		/*Si es menor, se guarda como el menor 
										de los ingresados*/
		}
		
		contador++;						/*Operador unario, que incrementa en 1 
										del contador.
										Equivalente a: contador = contador + 1;
										*/
	}
	
	//Mostrar los n�meros en pantalla
	cout << "El numero mayor entre los ingresados es: " << numero_mayor << endl;
	cout << "El numero menor entre los ingresados es: " << numero_menor << endl;
	
	return 0;
}
