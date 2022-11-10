class Pansalado{
    private: 
        string nombre;
        int costo;
        float saladez;
        int tamanio;
    public:
    //Constructores con parametros
    Pansalado (string nom, int cos, float sal, int tam ){
        nombre=nom;
        costo=cos;
        saladez=sal;
        tamanio=tam;
    }
    //Getters
    string getNombre(){
        return nombre;
    }
    int getCosto(){
        return costo;
    }
    float getSaladez(){
        return saladez;
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
    void setSaladez(float sal){
        saladez=sal;
    }
    void setTamanio(int tam ){
        tamanio=tam;
    }
    //Metodos de la clase
    void imprimeDatos(){
        cout<< "Nombre: "<<nombre<<endl;
        cout<< "Costo: "<<costo<<endl;
        cout<< "Saladez: "<<saladez<<endl;
        cout<< "Tamanio: "<<tamanio<<endl;
    }
};