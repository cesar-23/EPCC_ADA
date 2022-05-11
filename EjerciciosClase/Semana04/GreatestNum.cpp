#include <iostream>

/*
¿Cual es la complejidad del codigo?
La coplejidad del ejercicio entregado era cuadratica, en cambio ahora es lineal mediante el apoyo de una variable externa al array
¿Cual es el proposito del codigo?
Encontrar el mayor numero entre una lista
*/

using namespace std;

int GreatestNum(int arr[],int tam)
{
    int aux=0;
    for(int i=0;i<tam;i++)
    {
        if(aux<arr[i])
            aux = arr[i];
    }
    return aux;
}

int main()
{
    int test[]={21 , 16 , 42 , 60 , 99 , 32 , 45 , 70 , 63 , 61 , 86 , 51 , 97 , 74 , 96 , 52 ,
        49 , 34 , 19 , 15 , 8 , 44 , 49 , 73 , 43 , 48 , 50 , 87 , 10 , 58 , 53 , 97 , 59 , 69 , 97 , 19 ,
        88 , 9 , 27 , 7 , 8 , 56 , 36 , 68 , 67 , 6 , 49 , 46 , 7 , 12 , 51 , 37 , 7 , 93 , 43 , 33 , 68 ,
        86 , 100 , 53 , 46 , 59 , 52 , 32 , 78 , 39 , 30 , 31 , 85 , 98 , 33 , 49 , 69 , 12 , 65 , 67 , 100 ,
        83 , 61 , 70 , 99 , 234 , 53 , 95 , 29 , 3 , 97 , 47 , 99 , 13 , 99 , 68 , 58 , 3 , 93 , 40 , 39 , 15 , 55 , 36};
    int tam = sizeof(test) / sizeof(test[0]);
    int a =  GreatestNum(test,tam);
    cout<<a;
    return 0;
}
