#include <iostream>

using namespace std;

int main(){
	float S_k=0;
	float I_k=0;
	int periodos=0;
	float monto=0;
	float interes=0;
	
	cout<<"Monto del prestamo? ";
	cin>>monto;
	
	cout<<"Periodos? ";
	cin>>periodos;
	
	cout<<"Interes? ";
	cin>>interes;
	
	S_k=monto; //S_0 es igual al monto
	cout<<"Periodo\tInteres\tSuma"<<endl;
	cout<<"========================"<<endl;
	
	for(int contador=0;contador<periodos;contador++){
			I_k=S_k*(interes/100);
			S_k=S_k+I_k;
			cout<<contador+1<<"\t"<<I_k<<"\t"<<S_k<<endl;
	}
	
	cin.getch();
	return 0;
}