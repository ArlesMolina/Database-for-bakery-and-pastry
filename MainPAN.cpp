#include <iostream> 
using namespace std;
#include "Pandulce.h"
#include"Pansalado.h"
#include "Cafe.h"

 int main (){
    Pandulce pandulce("niño envuelto",20,5,20);
    pandulce.imprimeDatos();
    
    Pansalado pansalado("empanada",62,8,96);
    pansalado. imprimeDatos();

    Cafe cafe("Capuccino",62,"Chocolate",96);
    cafe. imprimeDatos();

 }
