#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float medidaUm, medidaDois, medidaTres;

cout<<"Informe o valor da 1� medida: ";
cin>>(medidaUm);
cout<<"Informe o valor da 2� medida: ";
cin>>(medidaDois);
cout<<"Informe o valor da 3� medida: ";
cin>>(medidaTres);

if(medidaUm == medidaDois && medidaDois == medidaTres){
	cout<<"O tri�ngulo � Equial�tero";
}
else if(medidaUm == medidaDois || medidaDois == medidaTres || medidaTres == medidaUm){
	cout<<"O tri�ngulo � Escaleno";
}
else{
	cout<<"O tri�ngulo � Is�sceles"; 
}
}
