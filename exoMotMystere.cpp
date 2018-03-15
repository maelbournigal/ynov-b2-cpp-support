//
// Created by maelb on 13/02/2018.
//
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(0));
    string mots;
    cout<<"Saisissez un mot ?"<< endl;
    cin >> mots;
    string motsUtilisateur = mots;
    string reponse;
    string motsMelange;
    int nbrAleatoire;
    char lettre;
    int longueurMots = mots.size();
    while (longueurMots !=0) {
        nbrAleatoire = rand() % longueurMots;
        motsMelange += mots[nbrAleatoire] ;
        mots.erase(nbrAleatoire, 1);
        longueurMots = mots.size();
    }
    do{
        cout<<"Quel est ce mot : "<< motsMelange <<endl;
        cin>> reponse;
        if (reponse == motsUtilisateur){
            cout<<"Bravo"<<endl;
        } else{
            cout<<"Ce n'est pas le mots"<<endl;
        }
    }while(reponse!=motsUtilisateur);


    return 0;
}