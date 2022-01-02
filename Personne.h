#pragma once
#include <string>
#include <map>
class Personne
{
private:
	std::string non;
	std::string adress;
	std::string Tel;
public:
	Personne(std::string Non, std::string Adress, std::string Telephonne);
	~Personne(); 
	void print()const;
};

