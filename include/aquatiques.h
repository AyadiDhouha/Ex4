#ifndef AQUATIQUES_H
#define AQUATIQUES_H

#include <Pokemon.h>


class aquatiques : public Pokemon
{
    protected:
    int nbrNag;
    public:
        aquatiques();
        aquatiques(string,float,int);
        float calculer_vitesse();
        float calculer_energie_absorb_quotid();
        void afficher();
        virtual ~aquatiques();


    private:
};

#endif // AQUATIQUES_H
