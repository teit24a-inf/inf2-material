#include <iostream>
#include <vector>
#include <algorithm>
#include "vectors2.h"



int main() { list_iteration(); list_find();}

void list_find(){
    std::vector<int> v2{10,17,55,23,42,107,38};
    std::cout << "List Find startet hier:" << std::endl;
    // Herausfinden, an welcher Stelle die 55 steht.
    int result = 0;
    for (int i = 0; i<v2.size();i++){
        if (v2[i] == 55) {
            result = i;
            break;
        }
    }
    std::cout << result << std::endl;

    // Bessere Methode
    auto pos_55 = std::find(v2.begin(), v2.end(),55);
    if (pos_55 != v2.end()){
    std::cout << pos_55 - v2.begin()<< std::endl; //Stelle ausgeben.
    std::cout << *pos_55 << std::endl;// Durch den Iterator wieder auf den Wert zugreifen.
    }else{
        std::cout << "Wert nicht gefunden!" << std::endl;
    }
}

void list_iteration(){
    std::vector<int> v1;
    
    // Elemente am Ende einfügen.
    v1.push_back(42);
    v1.push_back(23);
    v1.push_back(103);
    v1.push_back(55);
    
    // Zähler-Schleife, die über den Vector läuft
    for (int i = 0; i<v1.size();i++){
        std::cout << v1[i] <<" ";
    }
    std::cout << std::endl;

    
    //Elemente am Anfang einfügen.
    v1.insert(v1.begin(), 255);

    //Elemente an Stelle 2 einfügen.
    v1.insert(v1.begin()+2,700);

    // Range-Schleife, die über der Vector läuft.
    for (int el:v1){
        std::cout << el <<" ";
    }
    std::cout << std::endl;
    std::cout << v1.size() << std::endl;
    std::cout << "Das war die Iteration funktion" << std::endl;
    std::cout << std::endl;

}