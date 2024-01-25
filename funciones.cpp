#include <iostream>
using namespace std;
//declaracion de variables globales
int n1,n2,n3;
//realizar una funcion para recibir un parametro y de terminar
//si es par true o impar false
int sumar()
{
	return n1+n2;
}
int multiplicar()
{
	return n1*n2;
}
bool esPar(int n3) {
	return n3 % 2==0;
}
void ingresar()
{
	cout<<"ingresar el primer numero:";
	cin>>n1;
	cout<<"ingresar el segundo numero:";
	cin>>n2;
	cout<<"ingresa el numero:";
	cin>>n3;
}
int main(int argc, char *argv[]) {
	ingresar();
	cout<<"la suma de los numeros es:"<<sumar()<<endl;
	cout<<"la multiplicacion de los numeros es:"<<multiplicar()<<endl;
	if (esPar(n3)) {
		cout<<"el numero " <<n3<< " es par "<<endl;
	} else {
		cout<<"el numero "<<n3<< " es impar "<<endl;
	}
	return 0;
}
