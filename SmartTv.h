#ifndef SMARTTV_H
#define SMARTTV_H

#include "TV.h"

class SmartTV : public TV {
public:
    SmartTV(double precio, double peso);
    void seleccionarEntrada() override;
    void encender() override;
    void apagar() override;
};

#endif
