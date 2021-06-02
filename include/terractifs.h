#ifndef TERRACTIFS_H
#define TERRACTIFS_H

#include <Pokemon.h>


class terractifs : public Pokemon
{
    protected:
    float taille;
    int nbrPattes;
    float coefv;
    public:
        terractifs();
        terractifs(string,float,float,int,float);
        float calculer_vitesse();
        float calculer_energie_absorb_quotid();
        void afficher();
        virtual ~terractifs();


    private:
};

#endif // TERRACTIFS_H
