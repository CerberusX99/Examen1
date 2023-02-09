#include<iostream>
using namespace std;
int anoac, mesac, mes, ano, dia, diac, anos;
void PedirFecha(){
	cout<<"Calculadora de edad"<<endl;
	cout<<"Ingresa ano"<<endl;
	cin>>ano;
	cout<<"Ingresa mes"<<endl;
	cin>>mes;
	cout<<"Ingresa dia"<<endl;
	cin>>dia;
	cout<<"Listo"<<endl;
}
void Calcular(){
	anos=anoac-ano;
	if(mesac>=mes&&diac>dia){
		anos=anos+1;
	}
}
void Mostrar(){
	cout<<"Tu edad es: "<<anos<<" anos"<<endl;
}
int main(){
	anoac=2022;
	mesac=2;
	diac=9;
	PedirFecha();
	Calcular();
	Mostrar();
	return 0;
}