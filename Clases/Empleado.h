//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_EMPLEADO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_EMPLEADO_H

#include <vector>
#include <iostream>
#include <iomanip>

using std::cout;
using std::vector;
using std::cin;
using std::string;
using std::endl;
using std::setprecision;
using std::fixed;


class Empleado {
protected:

    string nombre;
    double salarioBase;

public:

// Contructores y destructores:

    Empleado();
    Empleado(string nombre, double salarioBase);
    virtual ~Empleado() = default;

// Gets y Sets:
    string getNombre();
    void setNombre(string nombre);

    double getSalarioBase();
    void setSalarioBase(double salarioBase);

// Metodos:

    virtual double calcularSalario() = 0;
    virtual void mostrarInformacion() = 0;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_EMPLEADO_H