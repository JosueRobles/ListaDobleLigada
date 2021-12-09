#include <iostream>
#include "listadobleligada.h"
using namespace std;
int main()
{
    ListaDobleLigada<int> enteros;
    enteros.push_front(1);
    enteros.push_front(2);
    enteros.push_front(3);
    enteros.push_back(4);
    enteros.push_back(5);
    enteros.push_back(6);
    cout << "cantidad de nodos de la lista: " << enteros.size() << endl;
    enteros.print();
    cout << "Direccion del primer elemento: " << enteros.front() << endl;
    cout << "Direccion del ultimo elemento: " << enteros.back() << endl;
    int *ptr_01 = enteros.find(1);
    if(ptr_01!=nullptr)
    {
        *ptr_01 = 3;
    }
    enteros.pop_front();
    enteros.pop_back();
    enteros.erase(3);
    cout << "cantidad de nodos de la lista: " << enteros.size() << endl;
    enteros.print();
    return 0;
}
