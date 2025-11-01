//
// Created by felip on 1/11/2025.
//

#include "Empleado.h"



//Constructores:

Empleado:: Empleado() {
    this->nombre = "Sin nombre";
    this->salarioBase = 0.0;
}

Empleado::Empleado(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

//Gets y sets:

string Empleado::getNombre() {
    return nombre;
}
void Empleado::setNombre( string nombre) {
    this->nombre=nombre;
}


double Empleado::getSalarioBase() {
    return salarioBase;
}
void Empleado::setSalarioBase(double salario) {
    this->salarioBase = salario;
}