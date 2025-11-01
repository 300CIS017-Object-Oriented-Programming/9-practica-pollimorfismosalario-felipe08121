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
# float salarioBase

+ Empleado()
+ Empleado( String nombre, float SalarioBase)
+ ~Empleado()
+ float calcularSalario()
+ void mostrarInformacion()

}

class DesarrolladorJunior{

    - float bono
    
    + DesarrolladorJunio()
    + DesarrolladorJunior( String nombre, float SalarioBase)
    + ~DesarrolladorJunior()
    + float calcularSalario()
    + void mostrarInformacion()
}

class DesarrolladorSenior{

    - float bono
    
    + DesarrolladorSenior()
    + DesarrolladorSenior( String nombre, float SalarioBase)
    + ~DesarrolladorSenior()
    + float calcularSalario()
    + void mostrarInformacion()
}

class LiderTecnico{
    
    - float bono
    + LiderTecnico()
    + LiderTecnico( String nombre, float SalarioBase)
    + ~LiderTecnico()
    + float calcularSalario()
    + void mostrarInformacion()
}

class Tester{
    
    - float bono

    + Tester()
    + Tester( String nombre, float SalarioBase)
    + ~Tester()
    + float calcularSalario()
    + void mostrarInformacion()
}

Empleado <|--Tester
Empleado <|--DesarrolladorJunior
Empleado <|--DesarrolladorSenior
Empleado <|--LiderTecnico

```