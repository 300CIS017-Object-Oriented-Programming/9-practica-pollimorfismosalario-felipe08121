//
// Created by felip on 1/11/2025.
//

#include "DesarrolladorSenior.h"

//Constructores y destructores:

DesarrolladorSenior::DesarrolladorSenior() {
    this->nombre = "Sin nombre";
    this->salarioBase = 0.0;
}

DesarrolladorSenior::DesarrolladorSenior(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

//Gets y sets:

float DesarrolladorSenior::getBono() {
    return bono;
}
void DesarrolladorSenior::setBono(float bono) {
    this-> bono = bono;
}



//Metodos:

double DesarrolladorSenior::calcularSalario() {
    double salario = 0;

    salario = this->salarioBase *( 1 +  this->bono);

    return salario;
}

void DesarrolladorSenior::mostrarInformacion() {
    cout << fixed << setprecision(2);

    cout << endl <<"======== Empleado ======== " << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Posicion: Desarrollador Senior" << endl;
    cout << "Salario Base: $" << getSalarioBase() << endl;
    cout << "Bono: " << this-> bono * 100 << "%" <<endl;
    cout << "Salario: $" << calcularSalario() << endl;
    cout << endl <<"======== ======== ======== " << endl;
}