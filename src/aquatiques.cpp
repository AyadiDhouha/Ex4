#include "aquatiques.h"
#include <iostream>
using namespace std ;

aquatiques::aquatiques()
{
    //ctor
    cout<<"constructeur par defaut de aquatiques"<<endl;
}
aquatiques::aquatiques(string n,float p,int nbn):Pokemon(n,p),nbrNag(nbn){
    cout<<"constructeur a parametres de aquatiques"<<endl;
}
float aquatiques::calculer_vitesse(){
    float v;
    v=nbrNag*(poids/25)*calculer_energie_absorb_quotid();
    return v;
}
float aquatiques::calculer_energie_absorb_quotid(){
    float e;
    e=poids/2;
    return e;
}
void aquatiques::afficher(){
    Pokemon::afficher();
    cout<<"j'ai "<<nbrNag<<" nagoires ."<<endl;
}

aquatiques::~aquatiques()
{
    //dtor
}
