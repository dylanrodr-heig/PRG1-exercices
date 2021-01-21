Exemple oprateur de flux avec une classe vector créée par le prof
```c++
std::ostream& operator<<(std::ostream& os, const CVector& cv){
   os << '(' << cv.x << ',' << cv.y << ')';
   return os;
}

std::istream& operator>>(std::istream& is, CVector& cv){
   char a,b,c;
   is >> a >> cv.x >> b >> cv.y >> c;
   return is;
}

int main(){
   CVector g;
   cin >> g;
   cout << g;
   return 1;
}
```
Utilisateur rentre ``(2,3)`` et console affiche ``(2,3)``  
/!\ il faut la définir en tant que friend !!