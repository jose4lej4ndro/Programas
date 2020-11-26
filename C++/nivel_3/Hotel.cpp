#include <iostream>
using namespace std;
float hotel1(float pre , float h3  );
int s,n ;
int y;
float h1, h2, h3;
float pre ;
int main()
{
  cout << "Bienvenido al Hotel Valmy JS " << endl ;
  cout << "Por favor ingrese su presupuesto Para Asignarle una habitacion" << endl ;
  cin  >> pre ;
  y=hotel1(pre, h3 );


  return 0;

}
float hotel1(float pre , float h3  )
{
    int q;
    if(pre<=1000 && pre>=500 )
    {
      cout << "Excelente su presupuesto es de una habitacion de 1 estrella" << endl ;
      cout << "Eso quiere decir que tendra los servicios comunes los cuales son: " << endl;
      cout << "Una cama individual" << endl ;
      cout << " Una cocina " << endl ;
      cout << " Y finalmente Un televisor antiguo " << endl ;
      cout << "La habitacion tiene un precio de 500 Bs" << endl ;
      cout << "El servicio del restaurani tiene un precio de 100 Bs" << endl ;
      cout << "Desea el servicio del restaurant SI escriba 1 ,NO escriba 2 ? " << endl ;
      cin  >> s;
      if(s==1 && pre>=600)
      {
        cout <<"El Restaurant Tiene un precio total de 100 Bs " << endl ;
        s=100+500;
        cout <<"Su Cuenta daria un total de: " << s << "Bs" << endl ;

      }
      else if(s==2)
      {
        cout << "Vale sin el servicio del Restaurant su habitacion daria un total de 500 Bs" << endl;
    } }
      if(pre<=499)
      {
        cout << " Lo sentimos pero nuestra Habitacion mas barata cuesta 500Bs" << endl;
      }
      else if (s== 1 && pre<=599 )
      {
        cout << " lo sentimos pero no tiene suficiente dinero para el servicio del restaurant" << endl ;
      }

      // Habitacion 2 estrellas
      if(pre<=3000 && pre>=1001 )
      {
        cout << "Excelente su presupuesto es de una habitacion de 2 estrellas" << endl ;
        cout << "Eso quiere decir que tendra casi los mejores sevicios los cuales son: " << endl;
        cout << "Una cama matrimonial" << endl ;
        cout << " Una cocina " << endl ;
        cout << " Un Ropero"   << endl ;
        cout << " Acceso al balcon" << endl ;
        cout << " Y finalmente Un televisor de 22 pulgadas " << endl ;
        cout << "La habitacion tiene un precio de 1500 Bs" << endl ;
        cout << "El servicio del restaurant tiene un precio de 1000  Bs" << endl ;
        cout << "Desea el servicio del restaurant SI escriba 1 ,NO escriba 2 ? " << endl ;
        cin  >> s;
        if(s==1 && pre>=2500)
        {
          cout <<"El Restaurant Tiene un precio total de 1000 Bs " << endl ;
          s=1000+1500;
          cout <<"Su Cuenta daria un total de: " << s << "Bs" << endl ;

        }
        else if(s==2)
        {
          cout << "Vale sin el servicio del Restaurant su habitacion daria un total de 1500 Bs" << endl;
      } }
         if (s== 1 && pre<=2499 && pre>1001  )
        {
          cout << " lo sentimos pero no tiene suficiente dinero para el servicio del restaurant" << endl ;
        }
        //Habitacion 3 estrellas
        if(pre>=3001 && pre<=8000 )
        {
          cout << "Excelente su presupuesto es de una habitacion de 3 estrellas" << endl ;
          cout << "Eso quiere decir que tendra casi los mejores sevicios los cuales son: " << endl;
          cout << "Una cama matrimonial" << endl ;
          cout << "Una Litera" << endl ;
          cout << "Una cocina " << endl ;
          cout << "Un Ropero"   << endl ;
          cout << "Acceso al balcon " << endl ;
          cout << "Acceso a la piscina del Hotel" << endl ;
          cout << "Una Consola de videojuegos" << endl;
          cout << "Y finalmente Un televisor de 48 pulgadas " << endl ;
          cout << "La habitacion tiene un precio de 3000 Bs" << endl ;
          cout << "El servicio del restaurant tiene un precio de 2000  Bs" << endl ;
          cout << "Desea el servicio del restaurant SI escriba 1 ,NO escriba 2 ? " << endl ;
          cin  >> s;
          if(s==1 && pre>=4999)
          {
            cout <<"El Restaurant Tiene un precio total de 2000 Bs " << endl ;
            s=3000+2000;
            cout <<"Su Cuenta daria un total de: " << s << "Bs" << endl ;

          }
          else if(s==2)
          {
            cout << "Vale sin el servicio del Restaurant su habitacion daria un total de 3000 Bs" << endl;
        } }
           if (s==1 && pre<=4999 && pre>3001  )
          {
            cout << " lo sentimos pero no tiene suficiente dinero para el servicio del restaurant" << endl ;
          }
          //
          if(pre>=8001  )
          {
            cout << "Excelente su presupuesto es del Penhouse del hotel" << endl ;
            cout << "Eso quiere decir que tendra  los mejores sevicios los cuales son: " << endl;
            cout << "Una cama matrimonial" << endl ;
            cout << "Una Litera" << endl ;
            cout << "2 cocinas " << endl ;
            cout << "3 Ropero"   << endl ;
            cout << "Acceso al balcon " << endl ;
            cout << "Su propio Jacuzzi " << endl ;
            cout << "Acceso a la piscina del Hotel" << endl ;
            cout << "Una Consola de videojuegos" << endl;
            cout << "Una Computadora con 64 gb de ram" << endl ;
            cout << "Y finalmente Un televisor de 150 pulgadas " << endl ;
            cout << "La habitacion tiene un precio de 8000 Bs" << endl ;
            cout << "El servicio del restaurant tiene un precio de 4000  Bs" << endl ;
            cout << "Desea el servicio del restaurant SI escriba 1 ,NO escriba 2 ? " << endl ;
            cin  >> s;
            if(s==1 && pre>=11999)
            {
              cout <<"El Restaurant Tiene un precio total de 4000 Bs " << endl ;
              s=8000+4000;
              cout <<"Su Cuenta daria un total de: " << s << "Bs" << endl ;

            }
            else if(s==2)
            {
              cout << "Vale sin el servicio del Restaurant su habitacion daria un total de 8000 Bs" << endl;
          } }
             if (s==1 && pre<=11999 && pre>8000  )
            {
              cout << " lo sentimos pero no tiene suficiente dinero para el servicio del restaurant" << endl ;
            }







return q;
}
