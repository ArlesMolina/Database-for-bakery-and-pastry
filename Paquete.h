#ifndef PAQUETE_H
#define PAQUETE_H
#include <iostream> 
#include <cmath>
#include <string>
using namespace std;
#include"Cafe.h"
#include "Pandulce.h"
#include"Pansalado.h"


class Paquete{
    private: 
    // Agregar como composicion el pan dulce y un cafe 
    Cafe unCafe;
    Pandulce unPandulce;
    Pansalado unPansalado;
    int precio;

    public:

    // Cafe(str, int, int, str)
    // Pandulce()
    // Pansalado
    Paquete(){
        Cafe _unCafe("Sencillo", 20, 16, "N/A");
        Pansalado _unPansalado("Bolillo",30, 0.8, 15);
        Pandulce _unPandulce("Chocopan", 30, 10, 0.5);

        unCafe = _unCafe;
        unPandulce=_unPandulce;
        unPansalado=_unPansalado;
        precio=70;
    };
    
    int getPrecio(){
        return precio;
    };
//Por falta de tiempo no se desarrollara este metodo
    //Paquete(Cafe, Pandulce, Pansalado){}
   
    string getTipoCafe(){
        return unCafe.getNombre();
    };
    string getPandulce(){
        return unPandulce.getNombre();
    };
    string getPansalado(){
        return unPansalado.getNombre();
    };


    void printPaquete(){
        cout << "Tipo de Pansalado: " << getPansalado() << endl;
      cout << "==================================" << endl;
      cout << "Tipo de Pandulce: " << getPandulce() << endl;
      cout << "==================================" << endl;
      cout << "Tipo de cafe: " << getTipoCafe() << endl;
      cout << "==================================" << endl;
      cout << "Total: " << getPrecio() << endl;
      cout << "==================================" << endl;

    };

};
#endif