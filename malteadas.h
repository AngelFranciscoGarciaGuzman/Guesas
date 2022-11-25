#include<string>
#include "precio.h"
#ifndef MALTEADA_H_
#define MALTEADA_H_


class Malteada: public Articulo{

    //Crear esqueleto de una malteada
    private:

    std::string sabor;
    float magnitud;
    
    public:

    Malteada():sabor(""), magnitud(0){};
    Malteada(std::string sa, float ma):sabor(sa), magnitud(ma){};

    //Funciones get
    std::string get_sabor();
    float get_magnitud();

    //Funciones set
    void set_sabor(std::string );
    void set_magnitud(float );

    std::string to_string();

};

std::string Malteada::get_sabor(){
    return sabor;   
}

float Malteada::get_magnitud(){
    return magnitud;
}


void Malteada::set_sabor(std:: string n_sabor){
    sabor = n_sabor;
}

void Malteada::set_magnitud(float n_magnitud){
    magnitud = n_magnitud;
}

std::string Malteada::to_string(){
    std::stringstream aux;
    aux << "sabor: " << sabor << " magnitud: " << magnitud << " litros" << std::endl;
    return aux.str();
}

#endif