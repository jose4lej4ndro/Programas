#include <iostream>
using namespace std;
int main()
{
    int valor1,valor2,valor3,valor4,valor5;
    cout<<"para determinar que numero es mayor o menor ingrese el primer numero "<<endl;
    cin>>valor1;
    cout<<"ingrese el 2do numero "<<endl;
    cin>>valor2;
    cout<<"ingrese el 3ercer monto "<<endl;
    cin>>valor3;
    cout<<"ingrese el 4to monto "<<endl;    
    cin>>valor4;
    cout<<"ingrese el 5to monto "<<endl;
    cin>>valor5;
    if(valor1>valor2 && valor1>valor3 && valor1>valor4 && valor1>valor5)
    {
        cout<<"el numero mayor es: "<<endl<<valor1<<endl;
    }
    else if(valor2>valor1 && valor2>valor3 && valor2>valor4 && valor2>valor5)
    {
        cout<<"el numero mayor es: "<<endl<<valor2<<endl;
    }
    else if(valor3>valor1 && valor3>valor2 &&  valor3>valor4 && valor3>valor5)
    {
        cout<<"el numero mayor es: "<<endl<<valor3<<endl;
    }
    else if(valor4>valor1 && valor4>valor2 && valor4>valor3 && valor4>valor5)
    {
        cout<<"el numero mayor es: "<<endl<<valor4<<endl;
    }
    else if(valor5>valor1 && valor5>valor2 && valor5>valor4)
    {
        cout<<"el numero mayor es: "<<endl<<valor5<<endl;
    }
    if(valor1<valor2 && valor1<valor3 && valor1<valor4 && valor1<valor5)
    {
        cout<<"el numero menor es: "<<endl<<valor1<<endl;
    }
     else if(valor2<valor1 && valor2<valor3 && valor2<valor4 && valor2<valor5)
    {
        cout<<"el numero menor es: "<<endl<<valor2<<endl;
    }   
     else if(valor3<valor1 && valor3<valor2 &&  valor3<valor4 && valor3<valor5)
    {
        cout<<"el numero menor es: "<<endl<<valor3<<endl;
    }
    else if(valor4<valor1 && valor4<valor2 && valor4<valor3 && valor4<valor5)
    {
        cout<<"el numero menor es: "<<endl<<valor4<<endl;
    }
     else if(valor5<valor1 && valor5<valor2 && valor5<valor4)
    {
        cout<<"el numero menor es: "<<endl<<valor5<<endl;
    }
    return 0;
}





























