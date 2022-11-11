#include<string>

class Malteada{

    //Crear esqueleto de una malteada
    private:

    int precio;
    std::string sabor;
    float magnitud;
    
    public:

    Malteada(): precio(0), sabor(""), magnitud(0){};
    Malteada(int pre, std::string sa, float ma): precio(pre), sabor(sa), magnitud(ma){};

    //Funciones get

    int get_precio();

    std::string get_sabor();

    float get_magnitud();
    //Funciones set

    void set_precio(int );
    void set_sabor(std::string );
    void set_magnitud(float );

};


int Malteada::get_precio(){
    return precio;
}

std::string Malteada::get_sabor(){
    return sabor;   
}

float Malteada::get_magnitud(){
    return magnitud;
}

void Malteada::set_precio(int n_precio){
    precio = n_precio;
}

void Malteada::set_sabor(std:: string n_sabor){
    sabor = n_sabor;
}

void Malteada::set_magnitud(float n_magnitud){
    magnitud = n_magnitud;
}
