#include <iostream>
#include <vector>
#include "SmartTV.h"
#include "TV3D.h"
#include "LEDTV.h"

int main() {
    SmartTV tv1(8000.00, 10.5);
    TV3D tv2(15000.00, 12.0);
    LEDTV tv3(10000.00, 8.0);
    SmartTV tv4(8500.00, 11.0);
    LEDTV tv5(9500.00, 7.5);

    std::vector<TV*> televisores = {&tv1, &tv2, &tv3, &tv4, &tv5};

    for (TV* tv : televisores) {
        tv->encender();
        tv->seleccionarEntrada();
        tv->subirVolumen();
        tv->subirVolumen();
        tv->bajarVolumen();
        tv->apagar();
        std::cout << "\n";
    }

    TV* combo = tv1 + tv3;
    combo->mostrarRecibo();
    delete combo;  

    if (tv2 > tv5) {
        std::cout << "TV2 pesa más que TV5\n";
    }
    if (tv5 < tv4) {
        std::cout << "TV5 pesa menos que TV4\n";
    }

    return 0;
}
