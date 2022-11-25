#include<string>
#ifndef PRECIO_H_
#define PRECIO_H_

class Articulo{
protected:
    float precio;
    float promocion;

public:

    Articulo(): precio(0), promocion(0){};
    Articulo(float pre, float pro):precio(pre), promocion(pro){};

    float get_precio();
    float get_promo();

    void set_precio(float );
    void set_promo(float );

};

float Articulo::get_precio(){
    return precio;
}

float Articulo::get_promo(){
    return promocion;
}

void Articulo::set_precio(float n_precio){
    precio = n_precio;
    precio = precio - (precio * promocion);
}

void Articulo::set_promo(float n_promo){
    promocion = n_promo;
}

#endif