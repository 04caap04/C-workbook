#include <iostream>

using namespace std;

int main(void)
{
    int ano; //declarar variaveis
	
    cout<< "Digite ano: "; //digitar variavel, assumindo que colocam numeros reais positivos
    
    cin>>ano; //ler variavel
    
    if ((ano % 4 == 0) && ( ano % 100 != 0 ) || (ano % 400 == 0)) // Se divisivel por 4 e por 400 e bissexto se divisivel por 100 nao e bissexto
    cout<< "Ano bissexto" <<endl; //Mostrar ano bissexto
    
    else cout<< "Ano NAO e bissexto" <<endl; //Mostrar Ano NAO bissexto
    
}
