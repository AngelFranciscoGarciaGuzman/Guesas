#include<string>
#include "precio.h"

class Malteada: public Precio{

    //Crear esqueleto de una malteada
    private:

    std::string sabor;
    float magnitud;
    
    public:

    Malteada(){};
    Malteada(std::string sa, float ma):sabor(sa), magnitud(ma){};

    //Funciones get
    std::string get_sabor();
    float get_magnitud();

    //Funciones set
    void set_sabor(std::string );
    void set_magnitud(float );

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
