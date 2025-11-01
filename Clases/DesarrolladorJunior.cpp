//
// Created by felip on 1/11/2025.
//

#include "DesarrolladorJunior.h"

//Constructores y destructores:

DesarrolladorJunior::DesarrolladorJunior() {
    this->nombre = "Sin nombre";
    this->salarioBase = 0.0;
}

DesarrolladorJunior::DesarrolladorJunior(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

//Gets y sets:

float DesarrolladorJunior::getBono() {
    return bono;
}
void DesarrolladorJunior::setBono(float bono) {
    this-> bono = bono;
}

// Metodos:

double DesarrolladorJunior::calcularSalario() {
    double salario = 0;

    salario = this->salarioBase *( 1 +  this->bono);

    return salario;
}

void DesarrolladorJunior::mostrarInformacion() {
    cout << fixed << setprecision(2);

    cout << endl <<"======== Empleado ======== " << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Posicion: Desarrollador Junior" << endl;
    cout << "Salario Base: $" << getSalarioBase() << endl;
    cout << "Bono: " << this-> bono * 100 << "%" <<endl;
    cout << "Salario: $" << calcularSalario() << endl;
    cout << endl <<"======== ======== ======== " << endl;
}

