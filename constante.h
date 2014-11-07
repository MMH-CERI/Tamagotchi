#include <iostream>

using namespace std;

class constante
{

public:

    int vie;
    int faim;
    int joie;
    int soif;
    int hygiene;
    int fatigue;

private:

    constante();
    ~constante();
    void gestionVie();
    void gestionFaim();
    void gestionJoie();
};
