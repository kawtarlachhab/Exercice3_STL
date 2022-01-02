#include <iostream>
#include <unordered_map>
#include <map>
#include "Personne.h"
using namespace std;



int main()
{
    Personne* ptr = new Personne("kawtar", "139 RIAD SALAM MOHAMADIA", "0624897255");

    Personne* ptr1 = new Personne("soumia", "128 casablanca", "0624897255");

    Personne* ptr2 = new Personne("Amina", "Fes", "0624897255");

    std::unordered_multimap<string, Personne*> Personnes;//= { {"kawtar",ptr} ,{"soumia",ptr1},{"amina",ptr2} };
    Personnes.insert(make_pair("kawtar", ptr));
    Personnes.insert(make_pair("soumia", ptr1));
    Personnes.insert(make_pair("Amina", ptr2));
    //Personnes.insert(pair<string, Personne*>("Amina", ptr2));
    for (auto p : Personnes)
    {
        p.second->print();
        p.first;
        cout << endl<< endl;
    }
    //rechercher par Non
    auto search  = Personnes.find("kawtar");
    //afficher la personne
    cout << search->first << " ";
    search->second->print();
}