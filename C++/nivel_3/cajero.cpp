//Programa que simula un banco
#include <iostream>
using namespace std;
float sd,x,dep,mon,res;
char nombre[10];
float opc,cd,cl,y;
float banco1 (float opc, float cd , float cl);
int main()
{
  cout << "Bienvenido al Banco JSt " << endl;
  cout << "Para comenzar a usar el Banco Porfavor ingrese su Nro de Cedula " << endl;
  cin  >> cd;
  cout << "Ahora ingrese su Clave"  << endl;
  cin  >> cl;
  cout << "Por favor seleccione una opcion:  " << endl ;
  cout << "Consulta.1  Retiro.2  Deposito.3 " << endl ;
  cin  >> opc ;
  y=banco1(opc,cd,cl);

  return 0;
}
float banco1 (float opc, float cd , float cl)
{
  float bd;
  if(cl<=999 )
  {
    cout << "Lo sentimos clave incorrecta " << endl ;
    cout << "Todas las claves son de 4 digitos" << endl;
  }
  if(opc==1 && cl>999)
  {
    cout << "Su saldo actual es de: 1000000" << endl;
  }
  if(opc==2 && cl>999)
  {
    cout << "Por favor ingrese el saldo a retirar" << endl;
    cin  >> sd ;
    if(sd>1000000)
    {
      cout << "Lo sentimos pero no tiene suficiente dinero para realizar el retiro" << endl ;
      cout << "El saldo actual en su cuenta es de 1000000" << endl ;
    }
    else if(sd<=1000000)
    {
      cout << "Su retiro ha sido procesado exitosamente " << endl ;
      x=1000000-sd;
      cout <<"Su saldo actual es de: " << x << endl ;
    }
  }
  if(opc==3)
  {
    cout << "Excelente Por favor seleccione una opcion" << endl ;
    cout << "Deposito a mi cuenta.1" << endl;
    cout << "Deposito a otra cuenta.2" << endl;
    cin  >> dep;
   if(dep==1)
    {
      cout << "Excelente Por favor ingrese el monto a depositar" << endl;
      cin  >> mon;
    }
    if(mon<=299999 && dep==1 )
    {
      cout << "Lo sentimos pero el monto minimo a depositar es de 300000" << endl;

    }
    else if(mon>=4999999)
    {
      cout << "Lo sentimos pero el monto maximo a depositar es de 5000000 " << endl ;
    }
    if(mon<=4999999 && mon>=30000)
    {
      cout << "Su deposito ha sido procesado exitosamente" << endl ;
      res=1000000+mon;
      cout << "El saldo actual en su cuenta es de: " << res << endl ;
    }
    if(dep==2)
    {
      cout << "Excelente Por favor ingrese el monto a depositar" << endl;
      cin  >> mon;
    }
    if(mon<=299999 && dep==2 )
    {
      cout << "Lo sentimos pero el monto minimo a depositar es de 300000" << endl;

    }
    else if(mon>=4999999 && dep==2)
    {
      cout << "Lo sentimos pero el monto maximo a depositar es de 5000000 " << endl ;
    }
    if(mon<=4999999 && mon>=30000 && dep==2)
    {
      cout <<"Porfavor ingrese el nombre de la persona a depositar" << endl;
      cin  >> nombre ;
      cout << "Ahora ingrese la cedula de la persona" << endl ;
      cin  >> cl ;

    }

    if(mon<=4999999 && mon>=30000 && dep==2)
    {
      cout << "Su deposito ha sido procesado exitosamente" << endl ;
      res=1000000+mon;
      cout << "ha Depositado " << res << " a " << nombre << endl ;
    }





























  }
return bd;
}
