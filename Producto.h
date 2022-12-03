#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

class Producto{
    

    // Declaramos los atributos que tendrá nuestra clase padre
    protected:
    string nombre;
    int costo;
    int tamanio;



    public:
    // Definicion de los metodos
    Producto(){
        nombre="";
        tamanio=0;
        costo=0;
    };

    Producto(string nom, int cos, int tam ){
        nombre=nom;
        costo=cos;
        tamanio=tam;
    }

    int getTamanio(){
        return tamanio;
    }

    string getNombre(){
        return nombre;
    }

    int getCosto(){
        return costo;
    }

    void setNombre(string nom ){
        nombre=nom;
    }
    void setCosto(int cos ){
        costo=cos;
    }
    void setTamanio(int tam ){
        tamanio=tam;
    }

	void imprimeDatos(){
        cout << "Nombre: "<< getNombre() << endl;
        cout << "Costo: "<< getCosto() << endl;
        cout << "Tamanio: "<< getTamanio() << endl;
    }
};
#endif