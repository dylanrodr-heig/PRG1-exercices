# Pour chaque exercice, ajouter une ligne
# add_executable( Nom_de_la_cible fichier1.cpp fichier2.cpp ... fichierN.cpp )
# avec le ou les fichiers à compiler

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

# Ex 5
add_executable(Ex5-5 Ex5-5.cpp)