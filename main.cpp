// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)
{
    return mi_cola.front();
}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
    return mi_cola.size();// mas que todo lo que hace es ver la cantida de elemento con size
}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
    while (mi_cola.empty ()==false)
    {
        if (mi_cola.front()==str)
        {
            return true;
        }
        mi_cola.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    int mayor=-9999;
    while(mi_cola.empty()==false)
    {
        if(mi_cola.front()>mayor)
        {
            mayor=mi_cola.front();
        }
        mi_cola.pop();
    }
    return mayor;
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    int menor= 9999; // verifica si todo los elemetos que hay en la cola es menor
    while(mi_cola.empty()==false)
    {
        if(mi_cola.front()<menor)// aqui verifica si la cola es menor
        {
            menor=mi_cola.front();
        }
        mi_cola.pop();
    }
    return menor;
}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    float promedio=0;
    float sum=0;
    float taman = mi_cola.size();

    while(!mi_cola.empty()) // aqui lo que hace es negar si la cola esta vacia
    {
        sum+= mi_cola.front();// aqui mira si la suma de la cola esta en cero y lo muestra enfrente
        mi_cola.pop();
    }
    promedio=sum/taman; //aqui mas que todo hace que el promedio va hacer igual suma y lo divide con el tamaño de la cola

    return promedio; // aqui retorna todo a promedio
  }





int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
