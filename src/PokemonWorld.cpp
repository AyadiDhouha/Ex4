#include "PokemonWorld.h"
#include<algorithm>
#include<vector>
PokemonWorld::PokemonWorld()
{
    //ctor
}

PokemonWorld::~PokemonWorld()
{
    //dtor
}
void PokemonWorld::ajouter(Pokemon *k){
v.push_back(k);
}
void PokemonWorld::supprimer(){
v.pop_back();
}
float PokemonWorld::calculer_energie_absorb(){
    float e=0;
    for (int i=0;i<v.size();i++){
        e+= v[i]->calculer_energie_absorb_quotid();
    }
    return e;

}
void PokemonWorld::supprimer(string n){
		vector <Pokemon*> ::iterator itr;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getNom() == n) {
				itr = find(v.begin(), v.end(), v[i]);
				break;
			}
		}
		v.erase(itr);
	}
float PokemonWorld::calcul_vitesse(){
    float m=0;
    for (int i=0;i<v.size();i++){
        m+= v[i]->calculer_vitesse();
    }
    return m/v.size();
}
