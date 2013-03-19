/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que determine si un número es positivo y menor que 100
*/

#include <iostream>
	
	using namespace std;

int main(){
	int numero = 0;							//Declaración e inicialización
	cout << "Escriba un numero: ";			//Impresión en pantalla
	cin >> numero;							//Captura por teclado del número
	/*
	Estructura selectiva con una condicional compuesta.
	Tiene dos condiciones unidas por un Y lógico (&&)
	*/
	if(numero>0 && numero<100)
		cout << "El numero es positivo y menor a 100";
	return 0;
}
