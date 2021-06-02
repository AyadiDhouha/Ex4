#include "Pokemon.h"
#include <iostream>
using namespace std;
Pokemon::Pokemon()
{
    //ctor
    cout<<"constructeur par defaut de Pokemon"<<endl;
}
Pokemon::Pokemon(string n,float p):nom(n),poids(p){
    cout<<"constructeur a parametre de Pokemon"<<endl;
}
void Pokemon::afficher(){
    cout << "Je suis " << nom << " mon poids est de " << poids << "kg," << " ma vitesse actuelle est de " << calculer_vitesse() << "km/h, " << "j'absorbe quotidiennement une énergie de " << calculer_energie_absorb_quotid() << ",";
}
Pokemon::~Pokemon()
{
    //dtor
}
