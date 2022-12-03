#include <iostream> 
#include <string>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
//No se manda a llamar al producto ya que esta definida dentro de las hijas
#include "Pandulce.h"
#include "Pansalado.h"
#include "Cafe.h"
#include "Paquete.h"

vector<Producto*> cafes;
vector<Producto*> panesd;
vector<Producto*> paness;

int main (){
   panesd.push_back(new Pandulce("Chcolate", 20, 96,2.1 ));
   panesd.push_back(new Pandulce("Vainilla", 20, 96,3.01));
   vector<Producto*>::const_iterator j;
  

   for( j = panesd.begin(); j < panesd.end(); ++j ){
      cout << "============================" << endl; 
      (*j) -> imprimeDatos(); // asterisco antes de la variable es el contenido, despues de la variables es el contenedor
   };
    cout << "============================" << endl;

   paness.push_back(new Pansalado("Chcolate", 20, 96,2.1 ));
   paness.push_back(new Pansalado("Vainilla", 20, 96,3.01));
   vector<Producto*>::const_iterator t;
  

   for( t = paness.begin(); t < paness.end(); ++t ){
      cout << "============================" << endl; 
      (*t) -> imprimeDatos(); // asterisco antes de la variable es el contenido, despues de la variables es el contenedor
      cout << "============================" << endl;
   };


   
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
   Paquete().printPaquete();
   
};