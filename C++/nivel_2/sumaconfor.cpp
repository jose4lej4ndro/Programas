#include <iostream>
using namespace std;
int main()
{
    int i=0,Num=0,Res,Dato=0,Sum=0;


  cout << "Programa que suma una cantidad de numeros suministrados por el Usuario? "<<endl;
  cout << "Suministre la cantidad de numeros a sumar: ";  
  cin >> Num;
  cout << " "<<endl;  
  for (i=1;i<=Num;i++)
  {
   cout <<"Introdusca Dato a Sumar: ";
   cin>>Dato;
   Res=Dato+Sum;
   Sum=Res;
  }      
  cout << "La cantidad de Numeros sumados es:"  <<Num<<endl;
  cout <<endl <<"El Resultado es:" << Res<<endl;
  return 0;
}
