#include <iostream>
using namespace std;
//#define PI 3.1416; // definimos una constante llamadp PI
int main(int argc, char *argv[]) {
	const float PI = 3.1416; // definimos una constante llamado PI
	double diametro, circunferencia;
	circunferencia=40;
	diametro=circunferencia/PI;
	cout<<"mostrando el valor de PI:" << PI;//<<endl;
	//PI=0;//error por asigancion a una variable de solo lectura
	return 0;
}
