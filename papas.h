#include<string>
#include "precio.h"

class Papas: public Precio{

    //Crear esqueleto de unas papas
    private:

    std::string estilo;
    float magnitud;
    
    public:

    Papas(){};
    Papas(std::string es, float ma):estilo(es), magnitud(ma){};

    //Funciones get
    std::string get_estilo();
    float get_magnitud();
    //Funciones set;
    void set_estilo(std::string );
    void set_magnitud(float );

};


std::string Papas::get_estilo(){
    return estilo;   
}

float Papas::get_magnitud(){
    return magnitud;
}


void Papas::set_estilo(std:: string n_estilo){
    estilo = n_estilo;
}

void Papas::set_magnitud(float n_magnitud){
    magnitud = n_magnitud;
}
