#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingresa el numero que quieres para la tabla"<<endl;
	cin>>num;
	for(int i=1; i<=10; i++){
		int mul=i*num;
		cout<<num<<"*"<<i<<"="<<mul<<endl;
	}
	return 0;
}