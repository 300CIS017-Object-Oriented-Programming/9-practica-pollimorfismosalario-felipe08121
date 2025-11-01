````mermaid
classDiagram


class Sistema{
    - vector  < Empleado * > empleados
    + Sistema()
    + ~ Sistema()
    + void crearEmpleado()
    + void mostrarInformacionEmpleados()
    + void mostrarInformacionEmpleado()
    + void calcularNominaTotal()
    + void inicializarDatos()
    
}

Sistema o--Empleado

class Empleado{

# String nombre
# double salarioBase

+ Empleado()
+ Empleado( String nombre, double SalarioBase)
+ ~Empleado()
+ double calcularSalario()
+ void mostrarInformacion()

}

class DesarrolladorJunior{

    - float bono
    
    + DesarrolladorJunio()
    + DesarrolladorJunior( String nombre, double SalarioBase)
    + ~DesarrolladorJunior()
    + double calcularSalario()
    + void mostrarInformacion()
}

class DesarrolladorSenior{

    - float bono
    
    + DesarrolladorSenior()
    + DesarrolladorSenior( String nombre, double SalarioBase)
    + ~DesarrolladorSenior()
    + double calcularSalario()
    + void mostrarInformacion()
}

class LiderTecnico{
    
    - float bono
    + LiderTecnico()
    + LiderTecnico( String nombre, double SalarioBase)
    + ~LiderTecnico()
    + double calcularSalario()
    + void mostrarInformacion()
}

class Tester{
    
    - float bono

    + Tester()
    + Tester( String nombre, double SalarioBase)
    + ~Tester()
    + double calcularSalario()
    + void mostrarInformacion()
}

Empleado <|--Tester
Empleado <|--DesarrolladorJunior
Empleado <|--DesarrolladorSenior
Empleado <|--LiderTecnico

```