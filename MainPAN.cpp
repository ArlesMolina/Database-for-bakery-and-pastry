/*
* Programa con las clases de: pan dulce, pan salado y café que:
* Atributos: tamaño , costo ,  nombre,dulsura .
* Metodos: getters(), setters(), crece(tiempo)
* Constructor
*/
#include <iostream> 
#include <string>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//No se manda a llamar al producto ya que esta definida dentro de las hijas
#include "Pandulce.h"
#include "Pansalado.h"
#include "Cafe.h"

vector<Producto*> cafes;
   

int main (){
   Pandulce pandulce("ninio envuelto",20,5,20);
   pandulce.imprimeDatos();
   cout << "============================" << endl;
   Pansalado pansalado("empanada",62,8,96);
   pansalado. imprimeDatos();
   cout << "============================" << endl; 
   
   cafes.push_back(new Cafe("Mocha", 20, 96, "Chispitas"));
   cafes.push_back(new Cafe("Capuccino", 20, 96, "Menta"));
//Iterador para vectores
   vector<Producto*>::const_iterator i;
   // Sample Cafe::Mocha() i

   for( i = cafes.begin(); i < cafes.end(); ++i ){
      cout << "============================" << endl; 
      (*i) -> imprimeDatos(); // asterisco antes de la variable es el contenido, despues de la variables es el contenedor
      cout << "============================" << endl;

   };

   
  
   
  
   
  

}
