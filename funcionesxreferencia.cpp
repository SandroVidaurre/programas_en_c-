#include <iostream>
using namespace std;

void ingresar(int &n1,int &n2)//referecia de n1,n2
{
	cout<<"ingresa un numero: ";
	cin>>n1;
	cout<<"ingresa otro numero: ";
	cin>>n2;
}
void sumar(int n1, int n2, int &resultado)//referecia resultado
{
	resultado=n1+n2;
}

int main(int argc, char *argv[]) {
	int n1,n2,resultado;
	ingresar(n1,n2);
	sumar(n1,n2,resultado);
	cout<<"La suma es: "<<resultado<<endl;
	return 0;
}
