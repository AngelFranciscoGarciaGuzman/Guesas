#include<string>
#include"precio.h"
#include<sstream>
#ifndef HAMBURGUESA_H_
#define HAMBURGUESA_H_



class Hamburguesa: public Articulo{

    //Crear esqueleto de una hamburguesa
    private: 

    std::string queso;
    std::string verduras;
    std::string salsa;

    public:

    //Hamburguesa default
    Hamburguesa(){};

    Hamburguesa(std::string que, std::string ve, std::string sa): queso(que), verduras(ve), salsa(sa){};

    //Funciones "get"

    std::string get_queso();
    std::string get_verdura();
    std::string get_salsa();

    //Funciones "set"

    void set_queso(std::string );
    void set_verdura(std::string );
    void set_salsa(std::string );

    std::string to_string();
};

//Definir funciones "get"
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
void Hamburguesa::set_queso(std::string n_queso){
    queso = n_queso;
}

void Hamburguesa::set_verdura(std::string n_pan){
    verduras = n_pan;
}

void Hamburguesa::set_salsa(std::string n_salsa){
    salsa = n_salsa;
}

std::string Hamburguesa::to_string(){
    std::stringstream aux;
    aux << "queso: " << queso << " verduras: " << verduras << " salsa: "<< salsa << std::endl;
    return aux.str();

}

#endif