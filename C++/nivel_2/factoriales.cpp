#include <iostream>
using namespace std;
int main ()
{   
    int i,num,res,l=1;   
    cout<<"Porfavor ingrese el numero Para calcular el factorial"<<endl;
    cin>>num;
    for(i=1 ; i<=num ; i++)
    {
        res=i*l;
        l=res;
     
    }
    cout<<"El resultado del factorial es"<<endl<<res<<endl;    
    if(num==0)
    {
        cout<<"El resultado es 1 "<<endl;
    } 
    
    return 0;
  

}

