/*
* Programa con las clases de: pan dulce, pan salado y café que:
* Atributos: tamaño , costo ,  nombre,dulsura .
* Metodos: getters(), setters(), crece(tiempo)
* Constructor
*/
#include "Producto.h"

#include <iostream> 
#include <cmath>
#include <string>

using namespace std;

class Cafe: public Producto{
    // Declaramos los atributos que tendra nuestra clase hija
    private: 
    string topping;
    
    public:
    // Definicion de los metodos
    Cafe(){
        topping="";
    }

    Cafe(string nom, int cos, int tam, string top): 
    //Estos son los datos que vienen del papa
    Producto(nom, cos, tam){
        //Propio
        topping = top;
    }

    string getTopping(){
        return topping;
    }

    void setTopping(string top){
        topping = top;
    }

    void imprimeDatos(){
        cout<< "Nombre: "<<getNombre()<<endl;
        cout<< "Costo: "<<getCosto()<<endl;
        cout<< "Tamanio: "<<getTamanio()<<endl;
        cout<< "Topping: "<<getTopping()<<endl;
    }

};


