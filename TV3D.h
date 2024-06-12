#ifndef TV3D_H
#define TV3D_H

#include "TV.h"

class TV3D : public TV {
public:
    TV3D(double precio, double peso);
    void seleccionarEntrada() override;
    void encender() override;
    void apagar() override;
};

#endif
