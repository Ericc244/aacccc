#include "TV.h"
#include "SmartTV.h"  

TV::TV(std::string tipo, double precio, double peso)
    : tipo(tipo), precio(precio), estado(false), volumen(0), peso(peso) {}

std::string TV::getTipo() const {
    return tipo;
}

double TV::getPrecio() const {
    return precio;
}

double TV::getPeso() const {
    return peso;
}

void TV::encender() {
    estado = true;
    std::cout << tipo << " encendida.\n";
}

void TV::apagar() {
    estado = false;
    std::cout << tipo << " apagada.\n";
}

void TV::subirVolumen() {
    if (estado && volumen < 100) {
        volumen++;
        std::cout << tipo << " volumen: " << volumen << "\n";
    }
}

void TV::bajarVolumen() {
    if (estado && volumen > 0) {
        volumen--;
        std::cout << tipo << " volumen: " << volumen << "\n";
    }
}

TV* TV::operator+(const TV& other) {
    double newPrice = this->precio + other.precio;
    double newWeight = this->peso + other.peso;
    return new SmartTV(newPrice, newWeight);
}

bool TV::operator>(const TV& other) {
    return this->peso > other.peso;
}

bool TV::operator<(const TV& other) {
    return this->peso < other.peso;
}

void TV::mostrarRecibo() {
    std::cout << "Recibo:\n";
    std::cout << "Tipo: " << tipo << ", Precio: $" << precio << ", Peso: " << peso << " kg\n";
}
