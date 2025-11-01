//
// Created by felip on 1/11/2025.
//

#include "LiderTecnico.h"


//Constructores y destructores:

LiderTecnico::LiderTecnico() {
    this->nombre = "Sin nombre";
    this->salarioBase = 0.0;
}

LiderTecnico::LiderTecnico(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}


//Gets y sets:

float LiderTecnico::getBono() {
    return bono;
}
void LiderTecnico::setBono(float bono) {
    this-> bono = bono;
}




//Metodos:

double LiderTecnico::calcularSalario() {
    float salario = 0;

    salario = this->salarioBase * ( 1 +  this->bono);

    return salario;
}

void LiderTecnico::mostrarInformacion() {
    cout << fixed << setprecision(2);

    cout << endl <<"======== Empleado ======== " << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Posicion: Lider Tecnico" << endl;
    cout << "Salario Base: $" << getSalarioBase() << endl;
    cout << "Bono: " << this-> bono * 100 << "%" <<endl;
    cout << "Salario: $" << calcularSalario() << endl;
    cout << endl <<"======== ======== ======== " << endl;
}