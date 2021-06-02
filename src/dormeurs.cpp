#include "dormeurs.h"
#include <iostream>
using namespace std ;

dormeurs::dormeurs()
{
    //ctor
    cout<<"constructeur par defaut de dormeurs"<<endl;
}
dormeurs::dormeurs(string n,float p,float t,int nbp,int nbh):Pokemon(n,p),taille(p),nbrPattes(nbp),nbrHR(nbh){
    cout<<"constructeur a parametres de dormeurs"<<endl;
}
float dormeurs::calculer_vitesse(){
    float v;
    v=nbrPattes*((poids+1)/2)*2*calculer_energie_absorb_quotid();
    return v;
}
float dormeurs::calculer_energie_absorb_quotid(){
    float e;
    e=(taille*taille)-(nbrHR*2);
    return e;
}
void dormeurs::afficher(){
    Pokemon::afficher();
    cout<<"j'ai "<<nbrPattes<<" pattes, ma taille est de "<<taille<<" m,je passe "<<nbrHR<<" heures en repos. "<<endl;
}
dormeurs::~dormeurs()
{
    //dtor
}
