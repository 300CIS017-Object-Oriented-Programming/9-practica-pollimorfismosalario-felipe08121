cmake_minimum_required(VERSION 4.0)
project(9_practica_pollimorfismosalario_felipe08121)

set(CMAKE_CXX_STANDARD 20)

add_executable(9_practica_pollimorfismosalario_felipe08121 src/main.cpp
        src/Clases/Empleado.cpp
        src/Clases/Empleado.h
        src/Clases/DesarrolladorJunior.cpp
        src/Clases/DesarrolladorJunior.h
        src/Clases/DesarrolladorSenior.cpp
        src/Clases/DesarrolladorSenior.h
        src/Clases/LiderTecnico.cpp
        src/Clases/LiderTecnico.h
        src/Clases/Tester.cpp
        src/Clases/Tester.h
        src/Clases/Sistema.cpp
        src/Clases/Sistema.h)
