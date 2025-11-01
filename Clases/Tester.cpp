//
// Created by felip on 1/11/2025.
//

#include "Tester.h"



//Constructores y destructores:

Tester::Tester() {
    this->nombre = "Sin nombre";
    this->salarioBase = 0.0;
}

Tester::Tester(string nombre, double salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}


//Gets y sets:

float Tester::getBono() {
    return bono;
}
void Tester::setBono(float bono) {
    this-> bono = bono;
}




//Metodos:

double Tester::calcularSalario() {
    double salario = 0;

    salario = this->salarioBase * ( 1 +  this->bono);

    return salario;
}

void Tester::mostrarInformacion() {
    cout << fixed << setprecision(2);

    cout << endl <<"======== Empleado ======== " << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Posicion: Tester" << endl;
    cout << "Salario Base: $" << getSalarioBase() << endl;
    cout << "Bono: " << this-> bono * 100 << "%" <<endl;
    cout << "Salario: $" << calcularSalario() << endl;
    cout << endl <<"======== ======== ======== " << endl;
}