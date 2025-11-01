````mermaid
classDiagram


class Sistema{
    - vector  < Empleado * > empleados

    + void crearEmpleado()
    + void mostrarInformacionEmpleados()
    + void mostrarInformacionEmpelado()
    + void inicializarDatos()
}

Sistema o--Empleado

class Empleado{

# String nombre
# float salarioBase

+ Empleado( String nombre, float SalarioBase)
+ void calcularSalario()

}

class DesarrolladorJunior{

    

    + DesarrolladorJunior( String nombre, float SalarioBase)
    + void calcularSalario()
}

class DesarrolladorSenior{
    

    + DesarrolladorSenior( String nombre, float SalarioBase)
    + void calcularSalario()
}

class LiderTecnico{
    

    + LiderTecnico( String nombre, float SalarioBase)
    + void calcularSalario()
}

class Tester{
    

    + Tester( String nombre, float SalarioBase)
    + void calcularSalario()
}

Empleado <|--Tester
Empleado <|--DesarrolladorJunior
Empleado <|--DesarrolladorSenior
Empleado <|--LiderTecnico


```