#include <iostream>
using namespace std;
int main()
{
    int resultado,g,i,h,tam=0,papichavez=0,papimaduro=0;
    char palabras [20];
    cout << "por favor ingrese la palabra para diagnosticar si es palindrome o no"<<endl;
    cin>>palabras;
    for(int i=0 ; palabras[i]!='\0' ;i++ )
    {
      tam++;
    }

    for(int g=tam-1,k=0 ; g>=0 ;g--,k++)
    {
        if(palabras[g] == palabras[k])
        {
          papichavez++;
        }
    }
    if(tam==papichavez)
    {
      cout << "la palabra es palindrome" << endl;
    }
    else
    {
      cout << "la palabra no es palindrome" << endl;
    }
    return 0;
}
