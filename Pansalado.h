#ifndef PANSALADO_H
#define PANSALADO_H
#include <iostream> 
#include <cmath>
#include <string>
#include "Producto.h"
using namespace std;
class Pansalado:public Producto{
    private: 
        float saladez;
    public:
    //Constructores con parametros
    Pansalado(){
        saladez=0.0;
    }
    Pansalado (string nom, int cos, float sal, int tam ):
    Producto(nom,cos,tam){
        saladez=sal;
    }
    //Getters
    
    float getSaladez(){
        return saladez;
    }
   
    //Setters
    
    void setSaladez(float sal){
        saladez=sal;
    }
    
    //Metodos de la clase
    void imprimeDatos(){
        cout<< "Nombre: "<<getNombre()<<endl;
        cout<< "Costo: "<<getCosto()<<endl;
        cout<< "Tamanio: "<<getTamanio()<<endl;
        cout<< "Saladez: "<<saladez<<endl;
    }
};

#endif 