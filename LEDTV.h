#ifndef LEDTV_H
#define LEDTV_H

#include "TV.h"

class LEDTV : public TV {
public:
    LEDTV(double precio, double peso);
    void seleccionarEntrada() override;
    void encender() override;
    void apagar() override;
};

#endif
