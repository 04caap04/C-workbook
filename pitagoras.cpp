#include <iostream>
#include<math.h>
using namespace std;
int main()
{
 cout<< "Valor da hipotenusa!\n";
 
 int c1,c2; //declarar a variavel;
 cout << "cateto 1: "; //indicar cateto1;
 cin >>c1;
 cout << "cateto 2: "; //indicar cateto2;
 cin >>c2;
 
 cout << "valor da hipotenusa: " << sqrt(c1*c1 + c2*c2); //calcular o tiorema de pitagoras);
 
 return 0;
}
