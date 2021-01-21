# Pour chaque exercice, ajouter une ligne
# add_executable( Nom_de_la_cible fichier1.cpp fichier2.cpp ... fichierN.cpp )
# avec le ou les fichiers à compiler

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

#add_executable(ex7.1 Ex7-1.cpp Point.cpp Point.h)