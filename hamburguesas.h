#include<string>
#include "precio.h"

#include<sstream>

class Hamburguesa: public Precio{

    //Crear esqueleto de una hamburguesa
    private: 

    bool queso;
    bool verduras;
    std::string salsa;

    public:

    //Hamburguesa default
    Hamburguesa(){};

    Hamburguesa(bool que, bool ve, std::string sa): queso(que), verduras(ve), salsa(sa){};

    //Funciones "get"

    bool get_queso();
    bool get_verdura();
    std::string get_salsa();

    //Funciones "set"

    void set_queso(bool );
    void set_verdura(bool );
    void set_salsa(std::string );

    std::string to_string();
};

//Definir funciones "get"
bool Hamburguesa::get_queso(){
    return queso;
}

bool Hamburguesa::get_verdura(){
    return verduras;
}

std::string Hamburguesa::get_salsa(){
    return salsa;
}

//Definir funciones "set"
void Hamburguesa::set_queso(bool n_queso){
    queso = n_queso;
}

void Hamburguesa::set_verdura(bool n_pan){
    verduras = n_pan;
}

void Hamburguesa::set_salsa(std::string n_salsa){
    salsa = n_salsa;
}

std::string Hamburguesa::to_string(){
    stringstream aux;

}