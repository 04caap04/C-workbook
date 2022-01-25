#include <iostream>
#include<locale.h>

using namespace std;

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	while (n!=0) { // Enquanto n for diferente que 0
		cout << "Que tabuada quer?: "; // Imprime que tabuada quer
		cin>>n; // Ler n
		
		if(n!=0) // Funcao se i igual a 1, i menor ou igual a 10, e i incrementa-se
		    for (int i = 1; i <= 10; i++) 
			{
		    cout << n << " x " << i << " = "<< n*i << endl; // Imprime a tabuada
		    }
	}

}
