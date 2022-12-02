#include<string>
#include"precio.h" //incluir clase "Articulo"
#include<sstream>
#ifndef HAMBURGUESA_H_
#define HAMBURGUESA_H_

/*
Clase Hamburguesa: Clase que representa las hamburguesas del menu y hereda de la clase Articulo.
*/

class Hamburguesa: public Articulo{

    //Atributos
    private: 

    std::string queso;
    std::string verduras;
    std::string salsa;

    public:

    //Constructores
    Hamburguesa(){};

    Hamburguesa(std::string que, std::string ve, std::string sa): queso(que), verduras(ve), salsa(sa){};

    //Getters

    std::string get_queso();
    std::string get_verdura();
    std::string get_salsa();

    //Setters

    void set_queso(std::string );
    void set_verdura(std::string );
    void set_salsa(std::string );

    std::string to_string();
};

//Definir funciones "get"

/**
 * Getter de los atributos de hamburguesa
 *
 * @param
 * @return atributos
 */


std::string Hamburguesa::get_queso(){
    return queso;
}

std::string Hamburguesa::get_verdura(){
    return verduras;
}

std::string Hamburguesa::get_salsa(){
    return salsa;
}

//Definir funciones "set"

/**
 * Setter de los ingredientes
 *
 * @param ingrediente
 * @return
 */

void Hamburguesa::set_queso(std::string n_queso){
    queso = n_queso;
}

void Hamburguesa::set_verdura(std::string n_pan){
    verduras = n_pan;
}

void Hamburguesa::set_salsa(std::string n_salsa){
    salsa = n_salsa;
}

//Funcion to_string para imprimir los atributos

std::string Hamburguesa::to_string(){
    std::stringstream aux;
    aux << "queso: " << queso << " verduras: " << verduras << " salsa: "<< salsa << std::endl;
    return aux.str();

}

#endif