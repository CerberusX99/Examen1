#include<iostream>
using namespace std;
int main(){
	int anoac, mesac, mes, ano, dia, diac, anos;
	anoac=2022;
	mesac=2;
	diac=9;
	cout<<"Calculadora de edad"<<endl;
	cout<<"Ingresa ano"<<endl;
	cin>>ano;
	cout<<"Ingresa mes"<<endl;
	cin>>mes;
	cout<<"Ingresa dia"<<endl;
	cin>>dia;
	cout<<"Listo"<<endl;
	anos=anoac-ano;
	if(mesac>=mes&&diac>dia){
		anos=anos+1;
	}
	cout<<"Tu edad es: "<<anos<<" anos"<<endl;
	return 0;
}