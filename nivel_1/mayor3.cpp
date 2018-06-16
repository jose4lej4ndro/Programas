#include <iostream>
using namespace std;
int main()
{
    int valor1,valor2,valor3;
    cout<<"para determinar que numero es mayor o menor ingrese el primer numero"<<endl;
    cin>>valor1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>valor2;
    cout<<"ingrese el tercer monto"<<endl;
    cin>>valor3;
    if(valor1>valor2 && valor2>valor3)
    {
        cout<<"el numero mayor es "<<endl<<valor1<<endl;
    }
    else if (valor2>valor1 && valor1>valor3)    
    {
        cout<<"el numero mayor es: "<<valor2<<endl;
    }
    else if (valor3>valor2 && valor2>valor1)
    {
        cout<<"el numero mayor es: "<<valor3<<endl;
    }
    return 0;   
}
      
    

