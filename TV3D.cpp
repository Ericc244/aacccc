#include "TV3D.h"

TV3D::TV3D(double precio, double peso) : TV("3D TV", precio, peso) {}

void TV3D::seleccionarEntrada() {
    std::cout << "Seleccionando entrada 3D en 3D TV.\n";
}

void TV3D::encender() {
    estado = true;
    std::cout << "3D TV encendida con efecto 3D.\n";
}

void TV3D::apagar() {
    estado = false;
    std::cout << "3D TV apagada y desactivando efecto 3D.\n";
}
