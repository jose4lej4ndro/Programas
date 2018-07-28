#include <iostream>
using namespace std;
int main()
{
  float porcentaje;
  float Monto;
  float resultado,papichavez;
  cout << "Por favor ingrese el monto para calcular el iva: " << endl ;
  cin  >> Monto;
  cout << endl;
  cout << "Ahora ingrese el porcentaje: " << endl ;
  cin  >> porcentaje;
  resultado = (Monto * porcentaje)/100 ;
  papichavez = resultado + Monto ;
  cout << "El resultado del Monto mas el IVA da un total de:  " << endl << papichavez << endl ;

  return 0;


}
