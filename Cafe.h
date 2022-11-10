class Cafe{
    private: 
        string nombre;
        int costo;
        string topping;
        int tamanio;
    public:
    //Constructores con parametros
    Cafe (string nom, int cos, string top, int tam ){
        nombre=nom;
        costo=cos;
        topping=top;
        tamanio=tam;
    }
    //Getters
    string getNombre(){
        return nombre;
    }
    int getCosto(){
        return costo;
    }
    string getTopping(){
        return topping;
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
    void setTopping(string top){
        topping=top;
    }
    void setTamanio(int tam ){
        tamanio=tam;
    }
    //Metodos de la clase
    void imprimeDatos(){
        cout<< "Nombre: "<<nombre<<endl;
        cout<< "Costo: "<<costo<<endl;
        cout<< "Topping: "<<topping<<endl;
        cout<< "Tamanio: "<<tamanio<<endl;
    }
};