# Pour chaque exercice, ajouter une ligne
# add_executable( Nom_de_la_cible fichier1.cpp fichier2.cpp ... fichierN.cpp )
# avec le ou les fichiers à compiler

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

# Ex 8
add_executable(Ex3-8 Ex3-8.cpp)

# Ex 9
add_executable(Ex3-9 Ex3-9.cpp)

# Ex 10
add_executable(Ex3-10 Ex3-10.cpp)

# Ex 11
add_executable(Ex3-11 Ex3-11.cpp)

# Ex 12
add_executable(Ex3-12 Ex3-12.cpp)

# Ex 15
add_executable(Ex3-15 Ex3-15.cpp)