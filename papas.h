#include<string>
#include "precio.h" //incluir clase "Articulo"
#ifndef PAPAS_H_
#define PAPAS_H_

/*
Clase Papas: Clase que representa la orden de Papas del menu y hereda de la clase Articulo.
*/

class Papas: public Articulo{

    //Atributos
    private:

    std::string estilo;
    std::string tamano;
    
    public:

    //Constructores
    Papas(){};
    Papas(std::string es, std::string ma):estilo(es), tamano(ma){};

    //Getters
    std::string get_estilo();
    std::string get_tamano();
    //Setters
    void set_estilo(std::string );
    void set_tamano(std::string );

    std::string to_string();

};


//Definir funciones "get"

/**
 * Getter de los atributos de Papas
 *
 * @param
 * @return atributos
 */


std::string Papas::get_estilo(){
    return estilo;   
}

std::string Papas::get_tamano(){
    return tamano;
}

//Definir funciones "set"

/**
 * Setter de los estilos y tamaños
 *
 * @param estilos
 * @return
 */


void Papas::set_estilo(std:: string n_estilo){
    estilo = n_estilo;
}

void Papas::set_tamano(std::string n_tamano){
    tamano = n_tamano;
}

//Funcion to_string para imprimir los atributos

std::string Papas::to_string(){
    std::stringstream aux;
    aux << "estilo: " << estilo << " tamano: " << tamano << std::endl;
    return aux.str();
}

#endif