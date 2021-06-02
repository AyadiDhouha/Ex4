#ifndef DORMEURS_H
#define DORMEURS_H

#include <Pokemon.h>


class dormeurs : public Pokemon
{
    protected:
    float taille;
    int nbrPattes;
    int nbrHR;
    public:
        dormeurs();
        dormeurs(string,float,float,int,int);
        float calculer_vitesse();
        float calculer_energie_absorb_quotid();
        void afficher();
        virtual ~dormeurs();


    private:
};

#endif // DORMEURS_H
