#include <iostream>
#include <string>
#include <vector>

using namespace std;

using Notes = vector<float>;

const char QUIT = '0';
const int MAX = 10;

void askUserQuestion();
Notes stringToNotes(const string& s);
void verifyUserAnswer(Notes& v);

int main(){
   Notes v;

   do{
      askUserQuestion();
      verifyUserAnswer(v);
   }while(v != Notes{});

	return EXIT_SUCCESS;
}

void askUserQuestion(){
   cout << "Entrez la liste de vos notes (" << MAX << " notes max), " << QUIT << " pour quitter : " << endl;
}

Notes stringToNotes(const string& s){
   Notes v;
   v.reserve(MAX);
   unsigned nbrSize = 1;
   unsigned nbrOldSize = 0;
   for(auto i = s.begin(); i != s.end(); i++){
      if(*i == ' '){
         // get the value
         string value = s.begin() + nbrOldSize, s.begin() + nbrOldSize + nbrSize;
         // check and add the value inside the vector

         nbrSize = 0;
      }
      nbrSize++;
      nbrOldSize++;
   }
   v

}

void verifyUserAnswer(Notes& v){
   string answer;
   getline(cin, answer);
   v = stringToNotes(answer);

   cout << "Moyenne non calculable car aucune note saisie !";

}