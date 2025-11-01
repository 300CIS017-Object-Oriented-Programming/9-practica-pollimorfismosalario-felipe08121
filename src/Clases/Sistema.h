//
// Created by felip on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_SISTEMA_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_SISTEMA_H

#include "Empleado.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"


#include <vector>
#include <iostream>
#include <iomanip>

using std::cout;
using std::vector;
using std::cin;
using std::string;
using std::endl;
using std::getline;


class Sistema {

private:
    vector <Empleado * > empleados;

public:
// Constructores y destrcutores:
    Sistema();
    virtual ~Sistema();

// Metodos:
    void crearEmpleados();
    void mostrarInformacionEmpleados();
    void mostrarInformacionEmpleado();
    void calcularNominaTotal();
    void inicializarDatos();

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_FELIPE08121_SISTEMA_H