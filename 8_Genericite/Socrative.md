## Notes socrative ch.8

Déclaration de classes génériques
```c++
template <typename T = int> class A {...};
template <typename T, typename U, int n> class B {...};
```
Instantiation correcte : 
```c++ 
B<A<double>, double, true> b;
```
  
---  
Soient les définitions suivantes
```c++
template <typename T, typename U> int f(T, U, int) { return 1; }
template <typename T> int f(T, T, short) { return 2; } 
```
que retourne l'expression suivante
```c++
f(int(2),int(3),char('A'))
```
Réponse :  `1`  
Explication : 
```
1 avec <T,U> = <int, int>
2 avec <T> = <int> et ajustement char -> short 
```
  
---  
Est-ce cette fonction compile ? Que retourne t'elle ?  
```c++
template <typename T, typename U> T f(T x, U y, T z) { 
    return   x + y + z;
}
f<double>(int(1), double(4.5), double(5.5))
```
Cette fonction retourne un `double`, le premier param est convert de `int` -> `double` par ajustement de type.
  
---
Soient les définitions suivantes  
```c++
template <typename T, typename U> int f(T, U, int) { return 1; }
template <typename T> int f(T, T, short) { return 2; } 
template <typename T> int f(T, int, int) { return 3; }  
int f(int, int, int)  { return 4; }
```
Que retourne l'expression suivante
```c++
f(int(2),int(3),char('A'))
```
Réponse `4`  
Explication :  
```
1 avec <T,U> = <int, int>  
2 avec <T> = <int> et ajustement char -> short  
3 avec <T> = <int>  
4 telle quelle  
```
> 1, 3 et 4 appelables sans conversion de type  
> 4 choisie car non générique  
  
---
Deded
