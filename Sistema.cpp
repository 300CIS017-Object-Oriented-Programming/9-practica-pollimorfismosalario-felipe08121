//
// Created by felip on 1/11/2025.
//

#include "Sistema.h"


//Constructores y Destructores:

Sistema::Sistema() {
    inicializarDatos();

}

Sistema::~Sistema() {
    int tamano = empleados.size();

    cout << endl <<"================================================" << endl;
    cout << endl << "Iniciando Destrucion." << endl;

    cout << "Destruyeendo............" << endl;
    cout << "[0/ "<< empleados.size()<< "] " <<"Destruyendo Empleado............" << endl;
    for ( int i= 0; i < empleados.size(); i++) {
        delete empleados[i];
        cout << "[" << i << "/"<< tamano<< "] " <<"Empleado Destruido." << endl;
    }
    empleados.clear();

    cout << endl << "Destrucion Terminada." << endl;
    cout << endl <<"================================================" << endl;
}

void Sistema::inicializarDatos() {
    cout << endl <<"================================================" << endl;
    cout << "Iniciando Inicializacion." << endl;
    cout << "Inicializando datos........ " << endl;
    cout << endl<< "[0/4] Inicializando empleados......." << endl;
    Empleado * empleado1 = new DesarrolladorJunior("Camilo Andres Perafan Ramos", 2000000);
    cout << "[1/4] Empleado Creado." << endl;
    Empleado * empleado2 = new DesarrolladorSenior("Luis Esteban Perafan Ramos", 8000000);
    cout << "[2/4] Empleado Creado." << endl;
    Empleado * empleado3 = new LiderTecnico("Juan Felipe Perafan Ramos", 10000000);
    cout << "[3/4] Empleado Creado." << endl;
    Empleado * empleado4 = new Tester("Thunder Levin", 1600000);
    cout << "[4/4] Empleado Creado" << endl;

    cout << endl <<"[0/4]Guardando empleados en el vector......" << endl;

    empleados.push_back(empleado1);
    cout <<"[1/4] Empleado Guardado." << endl;
    empleados.push_back(empleado2);
    cout <<"[2/4] Empleado Guardado." << endl;
    empleados.push_back(empleado3);
    cout <<"[3/4] Empleado Guardado." << endl;
    empleados.push_back(empleado4);
    cout <<"[4/4] Empleado Guardado." << endl;

    cout << endl << "Inicializacion Terminada."<< endl;
    cout << endl <<"================================================" << endl;

}

//Metodos:

void Sistema::mostrarInformacionEmpleados() {
    cout << endl <<"=============== Informacion de los Empleados ===============" << endl;

    for ( int i = 0; i < empleados.size(); i++) {
        empleados[i]->mostrarInformacion();
    }

    cout << endl <<"=====================================================" << endl;
}

void Sistema::mostrarInformacionEmpleado() {
    string nombre;

    cout << endl <<"==================== Empleados ====================" << endl << endl;

    for ( int i = 0; i < empleados.size(); i++) {
        cout << i+1 <<". Nombre: " << empleados[i]->getNombre() << endl;
    }

    cout << endl <<"Por favor escriba el nombre del empleado cuya informacion desea buscar: ";
    cin.ignore();
    getline(cin, nombre);

    cout << endl <<"=============== Informacion del Empleado ===============" << endl;

    for ( int i = 0; i < empleados.size(); i++) {
        if ( empleados[i]->getNombre() == nombre) {
            empleados[i]->mostrarInformacion();
            return;
            cout << endl <<"===============================================" << endl;
        }
    }

    cout  << endl <<"El empleado que desea buscar no existe, por favor intente otra vez. " << endl;
    cout << endl <<"===============================================" << endl;
}

void Sistema::calcularNominaTotal() {
    float nomina = 0.0;
    cout << fixed << setprecision(2);

    cout << endl <<"=============== Calculo de la Nomina Total ===============" << endl;

    for ( int i = 0; i < empleados.size(); i++) {
        nomina += empleados[i]->calcularSalario();
    }

    cout  << endl <<"La Nomina total de los empleados es igual a: $" << nomina << endl;
    cout << endl <<"===============================================" << endl;
}

void Sistema::crearEmpleados() {
    int opcion;
    string nombre;
    double salarioBase;

    cout << endl <<"=============== Creacion de Empleados ===============" << endl;

    cout << endl <<"----------------- Posiciones -----------------" << endl << endl;
    cout <<"1. Desarrollador Junior. " << endl;
    cout <<"2. Desarrollador Senior. " << endl;
    cout <<"3. Lider Tecnico. " << endl;
    cout <<"4. Tester. " << endl;
    cout << endl <<"Por favor Eliga una opcion (numero):  ";
    cin.ignore();
    cin >> opcion;

    switch (opcion) {
        case 1: {
            cout << endl << "---------------- Posicion: Desarrollador Junior ----------------" << endl<< endl;

            cout << "Por favor ingrese el nombre:";
            cin.ignore();
            getline(cin, nombre);

            cout << "Por favor ingrese el salario base del empleado: $";
            cin >> salarioBase;

            Empleado * empleadoNuevo = new DesarrolladorJunior( nombre, salarioBase);
            empleados.push_back(empleadoNuevo);

            cout << endl << "---------------- Desarrollador Junior Creado ----------------" << endl;

            break;
        }
        case 2: {
            cout << endl << "---------------- Posicion: Desarrollador Senior ----------------" << endl<< endl;

            cout << "Por favor ingrese el nombre:";
            cin.ignore();
            getline(cin, nombre);

            cout << "Por favor ingrese el salario base del empleado: $";
            cin >> salarioBase;

            Empleado * empleadoNuevo = new DesarrolladorSenior( nombre, salarioBase);
            empleados.push_back(empleadoNuevo);

            cout << endl << "---------------- Desarrollador Senior Creado ----------------" << endl;
            break;
        }
        case 3: {
            cout << endl << "---------------- Posicion: Lider Tecnico ----------------" << endl<< endl;

            cout << "Por favor ingrese el nombre:";
            cin.ignore();
            getline(cin, nombre);

            cout << "Por favor ingrese el salario base del empleado: $";
            cin >> salarioBase;

            Empleado * empleadoNuevo = new LiderTecnico( nombre, salarioBase);
            empleados.push_back(empleadoNuevo);

            cout << endl << "---------------- Lider Tecnico Creado ----------------" << endl;
            break;
        }
        case 4: {
            cout << endl << "---------------- Posicion: Tester ----------------" << endl << endl;

            cout << "Por favor ingrese el nombre:";
            cin.ignore();
            getline(cin, nombre);

            cout << "Por favor ingrese el salario base del empleado: $";
            cin >> salarioBase;

            Empleado * empleadoNuevo = new Tester ( nombre, salarioBase);
            empleados.push_back(empleadoNuevo);

            cout << endl << "-------------------------- Tester Creado ----------------" << endl;
            break;
        }
        default: {
            cout << endl << "Error: Opcion Incorrecta, por favor intente otra vez." << endl;
            break;
        }


    }
    cout << endl <<"-----------------> Nuevo Empleado Creado       " << endl;
    cout << endl <<"===============================================" << endl;

}