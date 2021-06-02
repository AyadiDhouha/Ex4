#ifndef POKEMONWORLD_H
#define POKEMONWORLD_H
#include<vector>
#include <Pokemon.h>


class PokemonWorld : public Pokemon
{
    protected:
    vector<Pokemon*> v;
    public:
        PokemonWorld();
        void ajouter(Pokemon*);
        void supprimer ();
        float calculer_energie_absorb();
        void supprimer(string);
        float calcul_vitesse();
        virtual ~PokemonWorld();


    private:
};

#endif // POKEMONWORLD_H
