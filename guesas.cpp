#include<iostream>
#include<string>
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"
#include"orden.h"

int main(){
    Orden num_1;
    num_1.agregaHamburguesa("Sin queso", "Con verduras", "BBQ", 0);
    num_1.asignar_precio_h(80.5, 0);
    num_1.agregaMalteada("Chocolate", 0.5, 0);
    num_1.asignar_precio_m(50.0, 0);
    num_1.agregaPapas("Clasicas", "Medianas", 0);
    num_1.asignar_precio_p(35.5, 0);
    std::cout << num_1.estatus_orden();
}