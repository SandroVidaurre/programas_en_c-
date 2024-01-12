#include <iostream>
using namespace std;
int main(int argc,char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	unsigned int numero_entero_s;
	//float numero_decimal;
	//double numero_decimal_g;
	//asignando valores limite de los tipos de dato
	numero_entero_p=32767;//valor limite del tipo de dato
	cout <<"numero entero pequeño:"<<numero_entero_p<<endl;
	numero_entero_p1=65535;//valor limite del tipo de dato 
	cout <<"numero entero pequeño positivo:"<<numero_entero_p1<<endl;
	// asignar los valores maximos para unsigned int y int
	numero_entero=2147483647;//valor limite del tipo de dato
	cout<<"numero entero:"<<numero_entero<<endl;
	numero_entero_s=4294967295;//valor limite del tipo de dato
	cout<<"numero entero:"<<numero_entero_s<<endl;
	//asignacion entre valores
	numero_entero_p1=numero_entero_p;//no es correcta! 
	cout <<"numero entero pequeño 1ra asignacion:"<<numero_entero_p1<<endl;
	//rango de datos short int -32768 al 32767
	numero_entero_p=32769;//el valor esta fuera del rango de valores permitido
	numero_entero_p1=numero_entero_p;
	cout <<"numero entero pequeño 2da asignacion:"<<numero_entero_p1<<endl;
	numero_entero_p=32760;//
    numero_entero_p1=numero_entero_p;
	cout <<"numero entero pequeño 3da asignacion:"<<numero_entero_p1<<endl;
	return 0;
}
