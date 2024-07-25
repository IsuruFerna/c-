#include <iostream>
#include <string>

using namespace std;

namespace Prova {
    int count = 0;
    int cedo = 0;
}

using std::string;

int main() {

    // std::string nome = "Isuru";
    string nome  = "Isuru";
    int numeri[5] = {10, 20, 30};

    std::cout << numeri;

    // pointers
    int* puntatore = numeri;

    struct Persona
    {
        string nome;
        string cognome;
        string codiceFiscale;
    }

    // comments
    /*
    
    multiriga comment

    */

   using namespace Prova;

   int eta;
   eta = 40;

   const int ETA_MASSIMA = 120;

   Prova::count;
   cedo;


    cout << "ciao sono " << nome  << " e ho " << eta <<" anni" << std::endl;
    std::cout << "prova";
    return 0;
}

// int, float (7 numbers after the decimentl) double (15 numbers after the decimentl)
// char bool
// string
// puntatori array structure classi