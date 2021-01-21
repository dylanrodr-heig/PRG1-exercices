Exemple d'opérateurs d’affectation composée
CVector.h
```c++
class CVector {
    double x, y;
public:
    CVector(double _x = 0, double _y = 0);
    CVector& operator/=(double d);
};

// On aurait pu aussi la déclarer en tant que friend en-dessous de "double x,y;"
CVector operator/(CVector const& lhs, double rhs);
```
CVector.cpp
```c++
CVector& CVector::operator/=(double d) {
    x /= d;
    y /= d;
    return *this;
}

CVector operator/(CVector const& lhs, double rhs) {
    CVector tmp (lhs);
    return tmp /= rhs;
}
```
/!\ Les opérateurs unaires, peuvent être déclaré en dehors de la classe ou dans la classe en tant que fonction friend.  
Mais les opérateur d'affectation `(*=, /=, ++)` doivent obligatoirement être écrit dans la classe en tant que fonction
membre et doivent être initialisé en dehors de la classe avec `nomClasse::operator@()`.