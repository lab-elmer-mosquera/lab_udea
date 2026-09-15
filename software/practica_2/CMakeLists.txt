cmake_minimum_required(VERSION 3.16)

project(practica_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(practica_2
    problemas.h problemas.cpp
    libs/consola.h libs/consola.cpp
    libs/cadena.h libs/cadena.cpp
    main.cpp
    )

include(GNUInstallDirs)
install(TARGETS practica_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
