//Programa que calcula el IVA
#include <iostream>
using namespace std;

//Entrada (falta que diga el numero total ,simplemente dice el numero del IVA)
int IVA1 (int x , int y , int g);
int main()
{
  int sum;
  int precio1;
  int res;
  int qlq;
  int precio,IVA,n1;
  cout << "Por favor ingrese cantidad,porcentaje y primer numero de la cantidad" << endl ;
  cin  >> precio >> IVA >> n1 ;
  precio1 = (n1*IVA);


  cout << "El IVA es de: " << precio1 << endl;
  return 0;
}
//Desarrollo
  int precio1,IVA,n1,precio;
  int IVA1 (int x , int y ,int g)
{
    float res;
    int klk1;
    for(int i=1 ; i<=IVA ; i++)
    {
      res = (n1*IVA);
      cout << "El IVA es de: " << precio1 << endl;
    }
  return klk1;
}
