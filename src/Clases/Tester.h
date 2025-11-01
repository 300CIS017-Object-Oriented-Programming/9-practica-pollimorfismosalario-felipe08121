//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_TESTER_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_TESTER_H

#include "Empleado.h"

class Tester: public Empleado {

private:
    float bono = 0.05;

public:

    //Constructores y destructores:
    Tester();
    Tester(string nombre, double salarioBase);
    virtual ~Tester() = default;

    // Gets y sets:

    float getBono();
    void setBono(float bono);

    //Metodos:

    double calcularSalario() override;
    void mostrarInformacion() override;



};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_TESTER_H