#include <iostream>
using namespace std;
int main()
{
    int numero1,numero2;
    cout<<"ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>numero2;
    if(numero1>=numero2)
    {
        cout<<numero1<<" es el numero mayor "<<endl;
    }
    else
    {
        cout<<numero2<<" es el numero mayor "<<endl;
    }
    if(numero1<=numero2)
    {
        cout<<numero1<<" es el numero menor "<<endl;
    }
    return 0;
}
