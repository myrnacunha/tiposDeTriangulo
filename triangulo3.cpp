#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float medidaUm, medidaDois, medidaTres;

cout<<"Informe o valor da 1º medida: ";
cin>>(medidaUm);
cout<<"Informe o valor da 2º medida: ";
cin>>(medidaDois);
cout<<"Informe o valor da 3º medida: ";
cin>>(medidaTres);

if(medidaUm == medidaDois && medidaDois == medidaTres){
	cout<<"O triângulo é Equialátero";
}
else if(medidaUm == medidaDois || medidaDois == medidaTres || medidaTres == medidaUm){
	cout<<"O triângulo é Escaleno";
}
else{
	cout<<"O triângulo é Isósceles"; 
}
}
