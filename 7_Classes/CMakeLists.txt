# Pour chaque exercice, ajouter une ligne
# add_executable( Nom_de_la_cible fichier1.cpp fichier2.cpp ... fichierN.cpp )
# avec le ou les fichiers à compiler

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(ex7.1 Ex7-1.cpp Point.cpp Point.h)
add_executable(ex7.2 Ex7-2.cpp Point.cpp Point.h)
add_executable(ex7.3 Ex7-3.cpp)
add_executable(ex7.4 Ex7-4.cpp)
add_executable(ex7.5 Ex7-5.cpp Point.cpp Point.h)
add_executable(ex7.6 Ex7-6.cpp Point.cpp Point.h)
add_executable(ex7.7 Ex7-7.cpp)
add_executable(ex7.8 Ex7-8.cpp)