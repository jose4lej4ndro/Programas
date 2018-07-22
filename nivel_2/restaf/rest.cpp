#include <iostream>
using namespace std;
float hacerRes(float x, float y);
int main()
{
  float v1;
  float v2;
  float g ;
  cout << "Para realizar la resta por favor ingrese los digitos a restar: ";
  cin  >> v1;
  cout << "Ahora ingrese el segundo monto: ";
  cin  >> v2;
  g=hacerRes(v1,v2);
  cout << "El resultado de la resta es: " << g << endl;
  return 0;
}
float hacerRes(float v1, float v2)
{
  float res;
  res=v1-v2;
  return res;
}
