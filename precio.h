#include<string>
#ifndef PRECIO_H_
#define PRECIO_H_

/**
 * Clase Articulo: Clase que representa a los articulos del menu.
 */

class Articulo{
protected:
    // Atributos
    float precio;
    float promocion;

public:
    // Constructores
    Articulo(): precio(0), promocion(0){};
    Articulo(float pre, float pro):precio(pre), promocion(pro){};

    // Getters
    float get_precio();
    float get_promo();

    // Setters
    void set_precio(float );
    void set_promo(float );

};

//Definir funciones "get"

/**
 * Getter del precio y prmocion
 *
 * @param
 * @return precio / promocion
 */

float Articulo::get_precio(){
    return precio;
}

float Articulo::get_promo(){
    return promocion;
}


//Definir funciones "set"


/**
 * Setter del precio y promocion
 *
 * @param precio
 * @return
 */


void Articulo::set_precio(float n_precio){
    precio = n_precio;
    precio = precio - (precio * promocion);
}

void Articulo::set_promo(float n_promo){
    promocion = n_promo;
}

#endif