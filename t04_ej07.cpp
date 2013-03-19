/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que determine si un número entero n es impar
*/

#include <iostream>
	
	using namespace std;

int main(){
	int numero = 0;						//Declaración e inicialización
	cout << "Escriba un numero: ";		//Impresión en pantalla
	cin >> numero;						//Captura por teclado del número
	
	//Mensaje descriptivo
	cout << "Programa que determina si un numero entero n es impar"<<endl<<endl;
	
	/*
	Estructura selectiva con la condición:
	si el número MOD 2 es diferente de cero, entonces el número es impar
	*/
	if(numero%2 != 0)
		cout << "El numero es impar";
	return 0;
}
