#include <iostream>
using namespace std;
	
int main(){
	//Solicitar al usuario un numero.
	cout<<"ingrese un numero para la tabla de multiplicacion"<<endl;
	int numero;
	cin >> numero;//lee el numero dado por el usuario.
	//muestra la tabla de multiplicacion del 1 al 10 para el numero. 
	cout<<"tabla de multiplicar para " <<numero<<":\n";
	//proceso del 1 al 10 e imprimir la multiplicacion.
	for (int i = 1; i <= 10; ++i){
		//mostrar la multiplicacion.
		cout<<numero<<"x"<<i<<"="<<(numero*i)<<"\n";
		
	}
	return 0;//indica que el programa se ejecuto sin errores.
}
