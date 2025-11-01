//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_LIDERTECNICO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_LIDERTECNICO_H

#include "Empleado.h"


class LiderTecnico: public Empleado{

private:
    float bono = 0.25;

public:

    //Constructores y destructores:
    LiderTecnico();
    LiderTecnico(string nombre, double salarioBase);
    virtual ~LiderTecnico() = default;

    // Gets y sets:

    float getBono();
    void setBono(float bono);

    //Metodos:

    double calcularSalario() override;
    void mostrarInformacion() override;


};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_LIDERTECNICO_H