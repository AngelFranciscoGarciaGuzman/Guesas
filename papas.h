#include<string>

class Papas{

    //Crear esqueleto de unas papas
    private:

    int precio;
    std::string estilo;
    float magnitud;
    
    public:

    Papas(): precio(0), estilo(""), magnitud(0.0){};
    Papas(int pre, std::string es, float ma): precio(pre), estilo(es), magnitud(ma){};

    //Funciones get

    int get_precio();

    std::string get_estilo();

    float get_magnitud();
    //Funciones set

    void set_precio(int );
    void set_estilo(std::string );
    void set_magnitud(float );

};


int Papas::get_precio(){
    return precio;
}

std::string Papas::get_estilo(){
    return estilo;   
}

float Papas::get_magnitud(){
    return magnitud;
}

void Papas::set_precio(int n_precio){
    precio = n_precio;
}

void Papas::set_estilo(std:: string n_estilo){
    estilo = n_estilo;
}

void Papas::set_magnitud(float n_magnitud){
    magnitud = n_magnitud;
}
