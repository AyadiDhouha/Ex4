#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include<iostream>
using namespace std;

class Pokemon
{
    protected:
    string nom;
    float poids;
    public:
        Pokemon();
        Pokemon(string,float);
        virtual float calculer_vitesse()=0;
        virtual float calculer_energie_absorb_quotid()=0;
        virtual void afficher();
        string getNom(){return nom;}
        virtual ~Pokemon();


    private:
};

#endif // POKEMON_H
