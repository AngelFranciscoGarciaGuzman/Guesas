#include<iostream>
#include<string>
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"

int main(){
    std::cout << "Hamburguesa: " << std::endl;
    Hamburguesa sencilla(85, "Con queso", "Hierbas");
    std::cout << sencilla.get_precio() << std::endl;
    std::cout << sencilla.get_pan() << std::endl;
    std::cout << sencilla.get_queso() << std::endl;
    std::cout << std::endl;

    std::cout << "Malteada: " << std::endl; 
    Malteada choco(40, "Chocolate", 1.5);
    std::cout << choco.get_sabor() << std::endl;
    choco.set_magnitud(2.5);
    std::cout << choco.get_magnitud() << std::endl;
    std::cout << std::endl;

    std::cout << "Papas: " << std::endl;
    Papas clasicas(35, "Sal y pimienta", 1.5);
    std::cout << clasicas.get_precio() << std::endl;
    std::cout << clasicas.get_estilo() << std::endl;
    std::cout << clasicas.get_magnitud() << std::endl;
    clasicas.set_precio(40);
    std::cout << clasicas.get_precio() << std::endl;
}
