#include <iostream>

using namespace std;

/*
¿Cual es el proposito del codigo?
Evalua si hay dos numeros en todo el array que sumen diez y no sean iguales
¿Cual es la complejidad del codigo?
Es un algoritmo de complejidad cuadratica
*/

bool SumTwo(int arr[],int tam)
{
    for(int i =0;i<tam;i++)
        for(int j=0;i<tam;i++)
        {
            if(i!=j && arr[i]+arr[j]==10)
                return true;
        }
    return false;
}

int main()
{
    int test[]={7 , 7 , 3 , 5 , 0 , 0 , 3 , 5 , 0 , 6 , 0 , 0 , 5 , 0 , 1 ,
    5 , 8 , 2 , 7 , 8 , 3 , 4 , 3 , 0 , 1 , 7 , 8 , 3 , 8 , 9 , 5 , 3 , 0 ,
    8 , 6 , 5 , 2 , 3 , 8 , 7 , 7 , 3 , 2 , 2 , 8 , 6 , 6 , 3 , 0 , 4};
    int tam = sizeof(test) / sizeof(test[0]);
    if(SumTwo(test,tam))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}