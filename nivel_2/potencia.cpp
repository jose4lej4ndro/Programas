#include <iostream>
using namespace std;
int main ()
{
    int i,datos,num,l,j=1;

    cout<<"porfavor ingrese la base de la potencia "<<endl;
    cin>>datos;
    cout<<"porfavor ingrese el exponente "<<endl;
    cin>>l;
    for(i=1 ;i<=l ; i++)
    {
        num=datos*j;
        j=num;
        
    }    
        cout<<"el resultado es "<<num<<endl;
    return 0;
}  
    
