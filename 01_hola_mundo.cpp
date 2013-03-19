/*
Autor: Miguel Duss�n
*/

//Biblioteca de entrada/salida para imprimir en pantalla
#include <iostream> 

using namespace std; //Espacio de nombres de plantilla est�ndar

//Esto es un comentario de una l�nea, empieza por dos slash

/*
Un comentario de m�ltiples l�neas abre con un slash y un asterisco, 
y cierra con un asterisco y un slash. Los comentarios no son 
tomados en cuenta al momento de compilar.
*/

/*
main es la funci�n principal. De all� es que arrancan los programas.
int indica que esta funci�n devuelve un n�mero entero.
Los par�ntesis indican que esta funci�n principal no recibe 
argumentos.

Las llaves {} indican el cuerpo de la funci�n. La llave 
izquierda { indica que abre la funci�n y la llave derecha } indica 
que cierra.
*/

int main(){
	/*
	La l�nea a continuaci�n imprime en pantalla la cadena que se 
	encuentra dentro de las comillas dobles, utilizando el comando 
	cout (c out, salida de c) y el operador <<. Las l�neas van con un 
	caracter de terminaci�n que es el punto y coma (;).
	*/
	cout << "Hola Mundo!";
	//Devuelve un n�mero indicando que el programa termin� correctamente.
	return 0; 
}
