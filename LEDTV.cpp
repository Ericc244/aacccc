#include "LEDTV.h"

LEDTV::LEDTV(double precio, double peso) : TV("LED TV", precio, peso) {}

void LEDTV::seleccionarEntrada() {
    std::cout << "Seleccionando entrada USB en LED TV.\n";
}

void LEDTV::encender() {
    estado = true;
    std::cout << "LED TV encendida con iluminación LED.\n";
}

void LEDTV::apagar() {
    estado = false;
    std::cout << "LED TV apagada y desactivando iluminación LED.\n";
}
