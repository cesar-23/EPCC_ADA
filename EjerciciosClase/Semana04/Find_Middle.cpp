#include <iostream>

using namespace std;

/*
¿Cual es el proposito del codigo?
Evalua si hay dos numeros en todo el array que sumen diez y no sean iguales
¿Cual es la complejidad del codigo?
Es un algoritmo de complejidad cuadratica
*/

bool Foud_Needle(char arr1[],char arr2[],int tam1,int tam2)
{
    int IndexArr1 = 0;
    int IndexArr2 = 0;
    bool found_needle;
    while(IndexArr2<tam2)
    {
        if(arr1[IndexArr1]==arr2[IndexArr2])
            found_needle = true;
            while(IndexArr1<tam1)
            {
                if(arr1[IndexArr1]!=arr2[IndexArr1+IndexArr2])
                    found_needle = false;
                break;
            }
            arr1++;
        if (found_needle)
        {
            return true;
            IndexArr1 = 0;
        }
        IndexArr2++;
    }
    return false;
}

int main()
{
    char test1[]={'a','b','c'};
    char test2[]={'a','b','c','d','e','g','h','i'};
    if(Foud_Needle(test1,test2,3,9))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}