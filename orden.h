#include<string>
#include<sstream>
#include"hamburguesas.h" //incluir clase "Hamburguesa"
#include"malteadas.h" //incluir clase "Malteadas"
#include"papas.h" //incluir clase "Papas"
#ifndef ORDEN_H_
#define ORDEN_H_

class Orden{

    private:
        Hamburguesa hamburguesas[4];
        Malteada malteadas[4];
        Papas papas[4]; 

    public:
        Orden(){};
        void agregaHamburguesa(std::string, std::string, std::string, int);
        void agregaMalteada(std::string, float, int);
        void agregaPapas(std::string, std::string, int);
        std::string estatus_orden();

        void asignar_precio_h(float, int);
        void asignar_precio_m(float, int);
        void asignar_precio_p(float, int);

};



void Orden::agregaHamburguesa(std::string que, std::string ve, std::string sa, int posicion){
    hamburguesas[posicion] = Hamburguesa(que, ve, sa);
}

void Orden::agregaMalteada(std::string sabor, float magnitud, int posicion){
    malteadas[posicion] = Malteada(sabor, magnitud);
}

void Orden::agregaPapas(std::string estilo, std::string tamano, int posicion){
    papas[posicion] = Papas(estilo, tamano);
}

void Orden::asignar_precio_h(float precio, int posicion){
    hamburguesas[posicion].set_precio(precio);
}

void Orden::asignar_precio_m(float precio, int posicion){
    malteadas[posicion].set_precio(precio);
}

void Orden::asignar_precio_p(float precio, int posicion){
    papas[posicion].set_precio(precio);
}


std::string Orden::estatus_orden(){
    float acum = 0;
    for(int i = 0 ; i < 4 ; i++){
        acum = acum + hamburguesas[i].get_precio();
        acum = acum + malteadas[i].get_precio();
        acum = acum + papas[i].get_precio();
    }

    std::stringstream aux;

    for(int i = 0 ; i < 4 ; i++){
        aux << "hamburguesa: " << i+1 << " " << hamburguesas[i].to_string() << std::endl;
    }

    for(int i = 0 ; i < 4 ; i++){
        aux << "malteada: " << i+1 << " " << malteadas[i].to_string() << std::endl;
    }

    for(int i = 0 ; i < 4 ; i++){
        aux << "papas: " << i+1 << " " << papas[i].to_string() << std::endl;
    }

    aux << "total a pagar: " << acum;

    return aux.str();

}

#endif