#include<iostream>
using namespace std;
int num;
void PedirN(){
	cout<<"Ingresa el numero que quieres para la tabla"<<endl;
	cin>>num;
}
void Mostrartabla(){
	for(int i=1; i<=10; i++){
		int mul=i*num;
		cout<<num<<"*"<<i<<"="<<mul<<endl;
	}
}
int main(){
	PedirN();
	Mostrartabla();
	return 0;
}