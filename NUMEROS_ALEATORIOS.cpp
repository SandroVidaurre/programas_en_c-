#include <iostream>
#include <cstdlib> //necesario para lageneracion de numeros aleatorios.
#include <ctime> //necesario para la semilla del generador de numeros aleatorios.
using namespace std;

int main() {
	//solicitar al usuario la cantidad numeros a imprimir.
	cout<<"ingrese la cantidad de numeros para mostrar:"<<endl;
	int N;
	cin>>N;
	//sembrar el generador de numeros aleatorios con el tiempo actual.
	srand(static_cast<unsigned int>(time(nullptr)));
	//imprime mensaje.
	cout<<N<<" numeros aleatorios entre 0 y 99:\n";
	//imprime N numeros aleatorios entre 0 y 99.
	for (int i = 0; i < N; ++i) {
		cout << rand() % 100<< " ";
	}
	return 0;//indica que el programa se ejecuto sin errores.
}
