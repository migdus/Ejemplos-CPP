/*
Autor: Miguel Dussán
*/

/*
Diseñe un programa que emule un control de acceso. El programa debe preguntar al
usuario por una contraseña alfanumérica (es decir, que puede contener números y 
letras) y verificar si la contraseña es correcta. El usuario dispondrá de tres 
intentos para acertar la contraseña. Si el usuario escribe la contraseña de 
forma correcta, el programa debe mostrar un mensaje que diga: Acceso concedido; 
de lo contrario mostrará el mensaje: Acceso denegado. La contraseña que estará 
preestablecida en el sistema será: A123.
*/

#include <iostream>
	
using namespace std;

int main(){
	//Declaración e inicialización de cadenas
	string passw_control="A123";	//Cadena con contraseña del sistema
	string passw_digitado = "";		//Cadena que guardará el password del usuario
	
	//Mensaje descriptivo del programa
	cout << "Este programa emula un control de acceso. Tiene tres intentos ";
	cout << "para acertar el password."<<endl<<endl;
	
	//Primer intento de digitar el password
	cout << "Password? ";
	cin >> passw_digitado;
	
	/*
	passw_digitado.compare(passw_control) compara las cadenas de passw_digitado 
	con passw_control para revisar si son iguales. passw_digitado.compare() 
	compara el contenido de passw_digitado con cualquier cadena que se 
	introduzca en los paréntesis.
	Esta función de comparación retorna 0 si son iguales. 
	Por eso en el if se realiza la comparación. Si lo que retorna es igual a 0, 
	entonces son iguales.
	*/
	if(passw_digitado.compare(passw_control) == 0){ //primera comparación
		cout << "Acceso concedido"<<endl;
	}else{
		cout << "Error en el password. Lleva 1 intento fallido." << endl;
		//Segundo intento de digitar el password
		cout << "Password? ";
		cin >> passw_digitado;
		if(passw_digitado.compare(passw_control) == 0){ //Segunda comparación
			cout << "Acceso concedido"<<endl;
		}else{
			cout << "Error en el password. Lleva 2 intento fallido." << endl;
			//Tercer intento de digitar el password
			cout << "Password? ";
			cin >> passw_digitado;
			if(passw_digitado.compare(passw_control) == 0){ //Tercera comparación
				cout << "Acceso concedido"<<endl;
			}else{
				cout << "Ha errado 3 veces. Acceso denegado." << endl;
			} //Cierra el tercer else
		} //Cierra el segundo else
	} //Cierra el primer else

	return 0;
}
