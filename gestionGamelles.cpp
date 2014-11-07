#include <iostream>
#include "gestionGamelles.hpp"

using namespace std;

gestionGamelles::gestionGamelles()
{
	quantiteEau = 0;
	quantiteNourriture = 0;
}

gestionGamelles::~gestionGamelles()
{}

void gestionGamelles::gestionGeau(int eau)
{
	quantiteEau += eau
}

void gestionGamelles::gestionGnourriture(int nourriture)
{
	quantiteNourriture += nourriture
}

bool gestionGamelles::retirerEau(int eau)
{
	if(quantiteEau = 0 || eau > quantiteEau)
		return false;

	quantiteEau -= eau;
	return true;
}

bool gestionGamelles::retirerNourriture(int nourriture)
{
	if(quantiteNourriture = 0 || nourriture > quantiteNourriture)
		return false;

	quantiteNourriture -= nourriture;
	return true;
}
