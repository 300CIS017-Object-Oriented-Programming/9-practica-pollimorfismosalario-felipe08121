#include <iostream>
#include "Sistema.h"


void menu() {

    cout << endl << "======= Sistema de Nomina de Pagos ======" << endl;
    cout << endl;
    cout << "1. Mostrar informacion de los empleados (todos). " << endl;
    cout << "2. Mostrar informacion de un empleado. " << endl;
    cout << "3. Crear un Empleado. "<< endl;
    cout << "4. Calcular la nomina total de la empresa. "<< endl;
    cout << "-1. Salir del programa. " << endl;
    cout << endl << "Elija una Opcion: ";

}

void menuSwitch(Sistema &sistemaMenu) {
    int opcion;

    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1: {
                sistemaMenu.mostrarInformacionEmpleados();
                break;
            }

            case 2: {
                sistemaMenu.mostrarInformacionEmpleado();
                break;
            }

            case 3: {
                sistemaMenu.crearEmpleados();
                break;
            }

            case 4: {
                sistemaMenu.calcularNominaTotal();
                break;
            }

            case -1: {
                cout << endl << "Saliendo del programa.........." << endl;
                break;;
            }

            default: {
                cout << "Opcion Incorrecta, por favor intente otra vez. " << endl;
                break;
            }
        }
    }
    while (opcion !=-1);


}

int main() {


    Sistema sistema;
    menuSwitch( sistema );


    cout << endl << "Aviso: Ha salido del programa." << endl;



    return 0;
}