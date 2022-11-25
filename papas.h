#include<string>
#include "precio.h"
#ifndef PAPAS_H_
#define PAPAS_H_


class Papas: public Articulo{

    //Crear esqueleto de unas papas
    private:

    std::string estilo;
    std::string tamano;
    
    public:

    Papas(){};
    Papas(std::string es, std::string ma):estilo(es), tamano(ma){};

    //Funciones get
    std::string get_estilo();
    std::string get_tamano();
    //Funciones set;
    void set_estilo(std::string );
    void set_tamano(std::string );

    std::string to_string();

};




std::string Papas::get_estilo(){
    return estilo;   
}

std::string Papas::get_tamano(){
    return tamano;
}


void Papas::set_estilo(std:: string n_estilo){
    estilo = n_estilo;
}

void Papas::set_tamano(std::string n_tamano){
    tamano = n_tamano;
}

std::string Papas::to_string(){
    std::stringstream aux;
    aux << "estilo: " << estilo << " tamano: " << tamano << std::endl;
    return aux.str();
}

#endif