#include "Personne.h"
#include <iostream>
using namespace std;
Personne::Personne(std::string Non, std::string Adress, std::string Telephonne)
{
	this->non = Non;
	this->adress = Adress;
	this->Tel = Telephonne;
}

Personne::~Personne()
{
	///Destructeur Personne
}

void Personne::print() const
{
	cout << this->non <<" "<< this->adress <<" "<< this->Tel;
}


