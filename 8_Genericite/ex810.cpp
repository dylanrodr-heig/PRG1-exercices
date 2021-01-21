#include <cstdlib>
#include <iostream>
#include <list>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

template <typename T, template <class, class = allocator<T>> class Collection>
class MaCollection {
   private:
      vector<T> v;
   public:
      void add(T);

};

int main() {

    MaCollection<int, vector> integers;
    size_t nb_integers;

    integers.add(1);
    integers.add(2);
    integers.add(3);

    nb_integers = integers.size();
    cout << "integers contient " << nb_integers
         << " element" << (nb_integers > 1 ? "s" : "") << " : ";
    afficher(integers);
    integers.clear();
    nb_integers = integers.size();
    cout << "integers contient " << nb_integers
         << " element" << (nb_integers > 1 ? "s" : "") << " : ";
    afficher(integers);


    MaCollection<string, list> strings;
    size_t nb_strings;

    strings.add("un");
    strings.add("deux");
    strings.add("trois");
    strings.add("quatre");

    nb_strings = strings.size();
    cout << "strings contient " << nb_strings
         << " element" << (nb_strings > 1 ? "s" : "") << " : ";
    afficher(strings);
    strings.clear();
    nb_strings = strings.size();
    cout << "strings contient " << nb_strings
         << " element" << (nb_strings > 1 ? "s" : "") << " : ";
    afficher(strings);

    return EXIT_SUCCESS;
}
