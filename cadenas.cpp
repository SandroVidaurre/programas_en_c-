#include <iostream>
using namespace std;
int main() {
	string Lyu;
	Lyu = "I love c++ ";
	//concatenando una cadena con la variable
	cout<<"la cadena es: " + Lyu <<endl;
	
	cout<<"la longitud de la cadena es: "<<Lyu.length()<<endl;
	//si el valor de retorno es 0, significa q la cadena no esta vacia
	cout<<"¿esta¡ vacio? "<<Lyu.empty()<<endl;
	Lyu.append("!"); //agg despues, a la cadena
	cout<<"la cadena modificada es : "<<Lyu<<endl;
	string Lyu_2;
	Lyu_2= "i love too";
	Lyu.swap(Lyu_2);//intercambi de datos de la cadena
	cout<<"cambie la cadena modificada como: "<<Lyu<<endl;
	
	int site;
	site= Lyu.find('l', 0);//encuentra la posicion dende aparece l
	cout<<"la posicion donde aparce l en la cadena es : "<<site<<endl;
	site= Lyu.find("oo", 0); // encuentra la posicion donde aparce oo
	cout<<"la posicion donde aparce oo en la cadena es: "<<site<<endl;
	site = 0;   //recorrer y buscar todas las posiciones o
	do
	{
		site=Lyu.find('o', site);
		if (site== -1)
			cout<<"busqueda completada, no hay otros elementos"<<endl;
		else
			cout<<"la posicion donde aparece o en la cadena es: "<<site<<endl;
		site++;
		
	} while(site !=0);
	
	
	
	return 0;
}
