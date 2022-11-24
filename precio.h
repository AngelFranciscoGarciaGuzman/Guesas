#include<string>

class Precio
{
private:
    float precio;
    float promocion;

public:

    Precio(){};
    Precio(float pre, float pro):precio(pre), promocion(pro){};

    float get_precio();
    float get_promo();

    void set_precio(float );
    void set_promo(float );

};

float Precio::get_precio(){
    return precio;
}

float Precio::get_promo(){
    return promocion;
}

void Precio::set_precio(float n_precio){
    precio = n_precio;
    precio = precio - (precio * promocion);
}

void Precio::set_promo(float n_promo){
    promocion = n_promo;
}
