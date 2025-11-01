//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORJUNIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORJUNIOR_H
#include "Empleado.h"

class DesarrolladorJunior: public Empleado {
private:
    float bono = 0;

public:

//Constructores y destructores:
    DesarrolladorJunior();
    DesarrolladorJunior(string nombre, double salarioBase);
    virtual ~DesarrolladorJunior() = default;

// gets y sets:
    float getBono();
    void setBono( float bono);

//Metodos:

    double calcularSalario() override;
    void mostrarInformacion() override;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORJUNIOR_H