#include<iostream>
using namespace std;
int num1, num2, num3;
void PedirNum(){
	cout<<"Ingresa un numero"<<endl;
	cin>>num1;
	cout<<"Ingresa un numero"<<endl;
	cin>>num2;
	cout<<"Ingresa un numero"<<endl;
	cin>>num3;
}
void NumMay(){
	if(num1>num2&&num1>num3){
		cout<<"El numero mayor es: "<<num1<<endl;
	}
	else if(num2>num1&&num2>num3){
		cout<<"El numero mayor es: "<<num2<<endl;
	}
	else{
		cout<<"El numero mayor es: "<<num3<<endl;
	}
}
void NumMen(){
	if(num1<num2&&num1<num3){
		cout<<"El numero menor es: "<<num1<<endl;
	}
	else if(num2<num1&&num2<num3){
		cout<<"El numero menor es: "<<num2<<endl;
	}
	else{
		cout<<"El numero menor es: "<<num3<<endl;
	}
}
int main(){
	PedirNum();
	NumMay();
	NumMen();
	return 0;
}