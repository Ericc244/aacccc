#ifndef TV_H
#define TV_H

#include <string>
#include <iostream>

class TV {
protected:
    std::string tipo;
    double precio;
    bool estado;
    int volumen;
    double peso; 

public:
    TV(std::string tipo, double precio, double peso);
    virtual ~TV() {}

    std::string getTipo() const;
    double getPrecio() const;
    double getPeso() const;

    virtual void encender();
    virtual void apagar();
    virtual void seleccionarEntrada() = 0;

    virtual void subirVolumen();
    virtual void bajarVolumen();

    TV* operator+(const TV& other);

    bool operator>(const TV& other);

    bool operator<(const TV& other);

    void mostrarRecibo();
};

#endif
