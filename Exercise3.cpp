#include <iostream>
#include<locale.h>

using namespace std;

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	int soma=0;
	
    for (int i=1; i <= 5; i++) { // Funcao para ler 5 numeros do utilizador
    	
    	cout << "Numero: "; // Imprimir
    	cin>> n; // Ler numero
    	soma = soma + n; // Calcular a soma
	}
	
	cout << "Soma e " << soma <<endl; // Mostra a soma
	cout << "A media e "<< (double) soma / (double)5 <<endl; // Mostra a media
}
