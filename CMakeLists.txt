cmake_minimum_required(VERSION 4.0)
project(9_practica_pollimorfismosalario_felipe08121)

set(CMAKE_CXX_STANDARD 20)

add_executable(9_practica_pollimorfismosalario_felipe08121 main.cpp
        Clases/Empleado.cpp
        Clases/Empleado.h
        Clases/DesarrolladorJunior.cpp
        Clases/DesarrolladorJunior.h
        Clases/DesarrolladorSenior.cpp
        Clases/DesarrolladorSenior.h
        Clases/LiderTecnico.cpp
        Clases/LiderTecnico.h
        Clases/Tester.cpp
        Clases/Tester.h
        Clases/Sistema.cpp
        Clases/Sistema.h)
