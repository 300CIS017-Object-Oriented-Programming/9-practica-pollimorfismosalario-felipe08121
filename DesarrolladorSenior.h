//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORSENIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior: public Empleado {
private:
    float bono = 0.2;

public:

    //Constructores y destructores:
    DesarrolladorSenior();
    DesarrolladorSenior(string nombre, double salarioBase);
    virtual ~DesarrolladorSenior() = default;

// Gets y Sets:
    float getBono();
    void setBono(float bono);


    //Metodos:

    double calcularSalario() override;
    void mostrarInformacion() override;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_DESARROLLADORSENIOR_H