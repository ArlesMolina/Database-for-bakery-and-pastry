/*
* Programa con las clases de: pan dulce, pan salado y café que:
* Atributos: tamaño , costo ,  nombre,dulsura .
* Metodos: getters(), setters(), crece(tiempo)
* Constructor
*/
#ifndef PANDULCE_H
#define PANDULCE_H
#include "Producto.h"
#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

class Pandulce:public Producto{
    private: 
        
        float dulsura;
     
    public:
    //Constructores con parametros
    Pandulce(){
        dulsura=0.0;
    }
    Pandulce (string nom, int cos, int tam, float dul ):
    Producto(nom,cos,tam){
        dulsura=dul;
    }
        
    
    //Getters
    float getDulsura(){
        return dulsura;
    }
    //Setters
    void setDulsura(float dul){
        dulsura=dul;
    }
    //Metodos de la clase
    void imprimeDatos(){
        cout<< "Dulsura: "<<dulsura<<endl;
        cout<< "Nombre: "<<getNombre()<<endl;
        cout<< "Costo: "<<getCosto()<<endl;
        cout<< "Tamanio: "<<getTamanio()<<endl;
    }
};
#endif