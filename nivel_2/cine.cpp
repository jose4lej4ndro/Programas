#include <iostream>
using namespace std;
int main()
{
  int  personas , entrada=100 , edad , pelicula;
  cout << "Bienvenido al cine (Venezolano en tangas).  "<< endl ;
  cout << "Hoy tenemos en taquilla las siguientes peliculas " << endl <<endl << "El resplandor" << endl  << "Spiderman 3" << endl << "Verdad o reto"  << endl << endl ;
  cout << "Hoy en especial tenemos un descuento del 50% para los estudiantes , y uno del 75% para los de 3ra edad "<< endl;
  cout << "Por favor ingrese su edad:  " << endl << endl ;
  cin  >> edad ;
  cout << "Por favor seleccione un numero en el orden en el que esta su pelicula favorita: "<< endl ;
  cin  >> pelicula ;

  //pelicula
  if(edad<=26)
  {
     cout << " Hemos determinado que usted es un estudiante ,usted tiene un descuento del 50%" << endl  ;
     cout << "Su entrada tiene un costo de 50Bs Soberanos" << endl ;
     cout << "!!Gracias Por su preferencia que disfrute su pelicula!!" << endl;
   }

  else if(edad<=49)
  {
    cout << "Hemos determinado que usted es una persona Promedio,lo que significa que no tiene ningun descuento " << endl ;
    cout << "Su entrada tiene un costo de 100Bs Soberanos" << endl;
    cout << "!!Gracias Por su preferencia que disfrute su pelicula!!" << endl ;
  }
  else if(edad>=55 )
  {
    cout << "Hemos determinado que es una persona de 3ra edad,lo que significa que tiene un descuento del 75%  " << endl ;
    cout << "Su entrada tiene un costo de 25Bs Soberanos" << endl;
    cout << "!!Gracias Por su preferencia que disfrute su pelicula!!" << endl;
  }

//edad
  if(pelicula == 1)
  {
    cout << "Usted ha seleccionado [El Resplandor]" << endl ;
  }
  else if (pelicula == 2)
  {
    cout << "Lo sentimos pero las entradas estan agotadas" << endl;
  }
  else if(pelicula == 3)
  {
    cout << " Usted ha seleccionado [Verdad o Reto]" << endl ;
  }
  return 0;


}
