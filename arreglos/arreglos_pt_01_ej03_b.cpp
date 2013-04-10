#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){
	
	int tam = 10;
	
	cout<<"Cuantos numeros desea ingresar? ";
	cin>>tam;
	
	//Declaración del arreglo de tipo entero
	int a[tam];
	float promedio = 0; //Variable acumuladora

	//Captura de los valores
	for(int i=0;i < tam; i++){
		cout<<"Ingrese el número "<< i+1 <<": ";
		cin>>a[i]; //Los valores se almacenan directamente en una posición del arreglo
	}
	
	//Mostrar el valor de la información almacenada en el arreglo
	cout<< "Posicion"<<setw(10) << "Valor" << endl;
	
	for(int j=0; j<tam;j++){
		
		//Impresión del índice del arreglo y del valor (j y a[j], respectivamente)
		cout<< setw(7) << j << setw(7) << a[j] << endl;
		
		/*
		Acumulador para calcular el promedio.
		Se aprovecha la iteración en la que se muestran los números para acumular
		los valores de cada una de las posiciones del arreglo en una variable.
		
		El operador += equivale a escribir: 
		promedio = promedio + a[j];
		*/
		promedio += a[j];
	}
	
	/*
	El cálculo del promedio se realiza en la misma línea en la que se 
	imprime.
	*/
	
	cout<<"El promedio de los números fue: "<<promedio/tam<<endl;
	
	cin.get();
	
	return 0;
}