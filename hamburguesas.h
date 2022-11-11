#include<string>

class Hamburguesa{

    //Crear esqueleto de una hamburguesa
    private: 

    int precio;
    std::string queso;
    std::string tipo_pan;

    public:

    //Hamburguesa default
    Hamburguesa() : precio(0), queso(""), tipo_pan(""){};

    Hamburguesa(int pre, std::string que, std::string pa): precio(pre), queso(que), tipo_pan(pa){};

    //Funciones "get"

    std::string get_queso();
    std::string get_pan();
    int get_precio();

    //Funciones "set"

    void set_queso(std::string );
    void set_pan(std::string );
    void set_precio(int );
};

//Definir funciones "get"
std::string Hamburguesa::get_queso(){
    return queso;
}

std::string Hamburguesa::get_pan(){
    return tipo_pan;
}

int Hamburguesa::get_precio(){
    return precio;
}

//Definir funciones "set"
void Hamburguesa::set_precio(int n_precio){
    precio = n_precio;
}

void Hamburguesa::set_queso(std::string n_queso){
    queso = n_queso;
}

void Hamburguesa::set_pan(std::string n_pan){
    tipo_pan = n_pan;
}
