//Programa que lee 3 numeros y dice cual es el mayor
#include <iostream>
using namespace std;



//Prototipo de función

int funcion1 (int x , int y , int g);
int qlq;
int main()
{

    cout << "Digite 3 numeros" << endl;
    cin  >> x >> y >> g ;

    qlq = funcion1(x,y,g);
    cout << "El numero mayor es:  " << qlq << endl;
    return 0;

}
//Definición de la función
int funcion1 (int x , int y, int g)
{
      int numas;
      if(x>y && x>g)
      {
        numas = x;
      }
      else if(y>x && y>g)
      {
        numas = y;
      }
      else if(g>x && g>y)
      {
        numas = g;
      }

      return numas;
}
