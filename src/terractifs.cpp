#include "terractifs.h"
#include <iostream>
using namespace std ;

terractifs::terractifs()
{
    //ctor
    cout<<"constructeur par defaut de terractifs"<<endl;
}
terractifs::terractifs(string n,float p,float t,int nbp,float c):Pokemon(n,p),taille(t),nbrPattes(nbp),coefv(c){
    cout<<"constructeur a parametres de terractifs"<<endl;
}
float terractifs::calculer_vitesse(){
    float v;
    v=nbrPattes*((poids+1)/2)*2*calculer_energie_absorb_quotid();
    return v;
}
float terractifs::calculer_energie_absorb_quotid(){
    float e;
    e=coefv*(taille*taille)*100;
    return e;
}
void terractifs::afficher(){
    Pokemon::afficher();
    cout<<"j'ai "<<nbrPattes<<" pattes, ma taille est de "<<taille<<" m,ma vitalite est de "<<coefv<<" . "<<endl;
}

terractifs::~terractifs()
{
    //dtor
}
