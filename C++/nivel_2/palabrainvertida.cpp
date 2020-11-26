#include <iostream>
using namespace std;
int main()
{
    int resultado, tam=0;
    char palabras[20];
    cout<<"porfavor ingrese la palabra a invertir"<<endl;
    cin>>palabras;
    for(int i=0; palabras[i]!='\0'; i++)
    {
      tam++;
    }
    for(int j=tam-1; j>=0; j--)
    {
      cout << palabras[j];
    }
    cout << endl;
}
