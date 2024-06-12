#include "SmartTV.h"

SmartTV::SmartTV(double precio, double peso) : TV("Smart TV", precio, peso) {}

void SmartTV::seleccionarEntrada() {
    std::cout << "Seleccionando entrada HDMI en Smart TV.\n";
}

void SmartTV::encender() {
    estado = true;
    std::cout << "Smart TV encendida con interfaz de usuario.\n";
}

void SmartTV::apagar() {
    estado = false;
    std::cout << "Smart TV apagada y guardando estado.\n";
}
