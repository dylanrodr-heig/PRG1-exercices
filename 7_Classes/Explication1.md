```c++
class B {
public :
   B(){cout << "ctr B \n";}
   B(int i){cout << "ctr B " << 1 << "\n";}
};

class A {
   B b;
public:
   A() {cout << "ctr A \n";};
   A(int i){
      b = 1;
      cout << "ctr A " << i << "\n";
   }
};

int main(){
   A mdr(1);
   return 1;
}
```
Affiche pcq il y a une affectation `b = 1`
```
ctr B
ctr B 1
ctr A 1
```
Alors que
```c++
class B {
public :
   B(){cout << "ctr B \n";}
   B(int i){cout << "ctr B " << 1 << "\n";}
};

class A {
   B b;
public:
   A() {cout << "ctr A \n";};
   A(int i) : b(i){
      cout << "ctr A " << i << "\n";
   }
};

int main(){
   A mdr(1);
   return 1;
}
```
Affiche, car il c'est une initialisation de liste
```
ctr B 1
ctr A 1
```