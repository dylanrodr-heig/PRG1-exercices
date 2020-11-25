# Exercice 2.3x : 
#### Indiquer ce qui va s'afficher

```c++
1) cout << fixed << setprecision(1) << 22.76;
```
22.8

```c++
2) cout << fixed << setprecision(3) << 22.76;
```
22.760

```c++
3) cout << fixed << 22.76;
```
22.760000

```c++
4) cout << default << setprecision(3) << 22.76;
```
22.8

```c++
5) cout << default << setprecision(8) << 22.76;
```
22.76

```c++
6) cout << default << setprecision(1) << 22.76;
```
2e+01

```c++
7) cout << scientific << setprecision(2) << 22.76;
```
2.28e+01

```c++
8) cout << scientific << 22.76;
```
2.276000e+01

```c++
9)  cout << setfill('*') << setw(6 << "++" << endl;
```
****++

```c++
10)  setfill('*') << left << setw(6 << "++" << endl;
```
++****

```c++
11) cout << setfill('*') << setw(3 << "+++++" << endl;
```
+++++