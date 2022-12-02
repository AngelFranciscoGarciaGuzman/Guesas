#include<string>
#include "precio.h" //incluir clase "Articulo"
#ifndef MALTEADA_H_
#define MALTEADA_H_

/*
Clase Malteada: Clase que representa las Malteadas del menu y hereda de la clase Articulo.
*/

class Malteada: public Articulo{

    //Atributos
    private:

    std::string sabor;
    float magnitud;
    
    public:

    //Constructores
    Malteada():sabor(""), magnitud(0){};
    Malteada(std::string sa, float ma):sabor(sa), magnitud(ma){};

    //Getters
    std::string get_sabor();
    float get_magnitud();

    //Setters
    void set_sabor(std::string );
    void set_magnitud(float );

    std::string to_string();

};


//Definir funciones "get"

/**
 * Getter de los atributos de Malteada
 *
 * @param
 * @return atributos
 */


std::string Malteada::get_sabor(){
    return sabor;   
}

float Malteada::get_magnitud(){
    return magnitud;
}


//Definir funciones "set"

/**
 * Setter de los ingredientes y magnitud
 *
 * @param ingrediente
 * @return
 */

void Malteada::set_sabor(std:: string n_sabor){
    sabor = n_sabor;
}

void Malteada::set_magnitud(float n_magnitud){
    magnitud = n_magnitud;
}

//Funcion to_string para imprimir los atributos

std::string Malteada::to_string(){
    std::stringstream aux;
    aux << "sabor: " << sabor << " magnitud: " << magnitud << " litros" << std::endl;
    return aux.str();
}

#endif