/*
* Programa con las clases de: pan dulce, pan salado y café que:
* Atributos: tamaño , costo ,  nombre,dulsura .
* Metodos: getters(), setters(), crece(tiempo)
* Constructor
*/
#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

class Pandulce{
    private: 
        string nombre;
        int costo;
        float dulsura;
        int tamanio;
    public:
    //Constructores con parametros
    Pandulce (string nom, int cos, float dul, int tam ){
        nombre=nom;
        costo=cos;
        dulsura=dul;
        tamanio=tam;
    }
    //Getters
    string getNombre(){
        return nombre;
    }
    int getCosto(){
        return costo;
    }
    float getDulsura(){
        return dulsura;
    }
    int getTamanio(){
        return tamanio;
    }
    //Setters
    void setNombre(string nom ){
        nombre=nom;
    }
    void setCosto(int cos ){
        costo=cos;
    }
    void setDulsura(float dul){
        dulsura=dul;
    }
    void setTamanio(int tam ){
        tamanio=tam;
    }
    //Metodos de la clase
    void imprimeDatos(){
        cout<< "Nombre: "<<nombre<<endl;
        cout<< "Costo: "<<costo<<endl;
        cout<< "Dulsura: "<<dulsura<<endl;
        cout<< "Tamanio: "<<tamanio<<endl;
    }
};

