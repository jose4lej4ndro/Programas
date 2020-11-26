#include <iostream>
using namespace std;
float prom1(float x , float y);
char alum1[8];
float promedio,sum=0,res,y1,x,y,k;
float nota,s,a,div1=1,division;
int main()
{
  cout <<"Bienvenido al Sistema Que calcula el promedio de cualquier cantidad de  estudiantes " << endl ;
  cout <<"Para comenzar indique la cantidad de estudiantes a calcular el promedio" << endl;
  cin  >>promedio ;
  cout << "Ahora indique la cantidad de notas " << endl ;
  cin  >> s;
  y1=prom1(x,y);
  return 0;

}
float prom1(float x , float y)
{
  if(s<=2)
  {
    cout <<"Lo sentimos pero la cantidad minima de notas es de 3" << endl ;
  }

  float prom2 ;
  if(s>=3)
  {
    for(int i=1 ; i<=promedio ; i++)
    {
      cout << "Ingrese el nombre del estudiante " << i << endl ; ;
      cin  >>alum1;
      sum=0;nota=0;
      for(int a=1 ; a<=s ; a++)
      {
      if(nota<=20){
      cout << "Ingrese la nota " << a << " de  " << alum1 << ": "    ;
      cin  >> nota;
      res = nota+sum;
      sum=res;
      }
      }
	  div1=res/s;
	  division=div1 + division;
      if(nota<=20){
      cout << "El resultado del promedio de " << alum1 <<" es:  " << div1 << endl ;
      if(div1<=9)
      {
        cout << "Lo sentimos pero el estudiante " << alum1 << " No aprobo el año" << endl ;
      }
        else if(div1>=10)
      {
        cout << "Felicidades el estudiante ha pasado" << endl << endl ; ;
      }
      }
        if(nota>=21)
      {
        cout << "Lo sentimos las Notas son de 20 pts maximo Por favor reinicie el programa  " << endl ;
      }
    }
  }
      if(nota<=20)
      {
      k=division/promedio;
      cout << "El promedio de la seccion es " << k << endl ;
      }


}
