#include <iostream>
#include <cstdlib>
using namespace std;
int aleatorio() //funcion de numeros aleatorios
{
	return rand() % 100;
}
bool esImpar(int numero){ // funcion para numeros impares
	return numero %2!=0;
}
int main(int argc, char *argv[]) {
	//en base a funciones imprimir n numeros impares. n=5
	int n,c=0,num;
	//pedir la cantidad de n numeros aleatorios
	cout<<"generar N numeros Impares,ingrese n:";
	cin>>n;
	while(c<n) //bucle de while para la cantidad de numeros aleatorios
	{
		num=aleatorio();
		if(esImpar(num))
		{
			c++;
			cout<<"impar["<<c<<"]:"<<num<<endl;//muestra la cantidad de numeros impares aleatorios
		}
	}
	return 0;
	
}
